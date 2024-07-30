using System.Text.RegularExpressions;
using Corg_Project.MIPSCore.Instructions;
using Corg_Project.MIPSCore.Registers;
using Corg_Project.MIPSCore.Memory;

namespace Corg_Project.MainLogic
{

    public class MainLogic
    {
        private static MainLogic m_Instance;
        private MainLogic()
        {
            
            m_Lines = new List<string>();
            
            m_LabelMap = new Dictionary<string, int>();
            m_ActualLineMap = new Dictionary<int, int>();

            m_IsAssembled = false;
        }
        public static MainLogic Instance
        {
            get {
                if (m_Instance == null)
                { 
                    m_Instance = new MainLogic();
                }
                return m_Instance;
            }

        }
        
        public int GetActualLineNumber()
        {
            try
            {
                return m_ActualLineMap[RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue];
            }
            catch
            {
                return -1;
            }
            
        }
        public bool AssembleProgram(string textContent)
        {
            m_ActualLineMap.Clear();
            RegisterHandlers.Instance.Initialize();
            MemoryHandler.Instance.Initialize();
            m_TextContent = textContent;
            m_Lines = ParseContentAsLines(textContent);
            for (int i = 0; i < m_Lines.Count; ++i)
                m_Lines[i] = PrepareString(m_Lines[i]);

            m_RawInstructionLines = new List<List<string>>();
            foreach (string line in m_Lines)
                m_RawInstructionLines.Add(SplitWords(line));


            AssembleFromRawInstructions(m_RawInstructionLines);
            m_IsAssembled = true;
            return true;
        }

        public void RunNextInstruction(out bool isSuccess)
        {
            isSuccess = false;
            if (m_IsAssembled)
            {
                MemoryHandler.Instance.GetFromInstructionMemoryByAddress(RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue, out isSuccess).Execute();
            }
            
        }

        public bool IsNextInstructionValid()
        {
            bool isSuccess = false;
            if (m_IsAssembled)
            {
                MemoryHandler.Instance.GetFromInstructionMemoryByAddress(RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue, out isSuccess);
                return isSuccess;
            }
            return false;
        }
        private List<string> ParseContentAsLines(string textContent)
        {
            return textContent.Split(new[] { "\n"}, StringSplitOptions.RemoveEmptyEntries).ToList();
        }

        private string PrepareString (string content)
        {
            return Regex.Replace(((content.Replace(",", " ")).Replace(")"," ")).Replace("("," "), @"\s+", " ");
        }

        private List<string> SplitWords(string content)
        {
            return content.Split(' ').ToList();
        }

        

        private void AssembleFromRawInstructions(List<List<string>> rawInstructions )
        {
            int rawInstructionCount;
            int counter = 0;
            int actualLine = 0;
            bool isLabel = false;

            foreach (List<string> rawInstruction in rawInstructions)
            {
                rawInstructionCount = rawInstruction.Count;
                InsertLabels(rawInstruction, ref counter);
                ++counter;
            }
            counter = 0;

            foreach (List<string> rawInstruction in rawInstructions)
            {
                isLabel = rawInstruction.Count == 1;
                rawInstructionCount = rawInstruction.Count;
                CheckAndCreateFromRawInstruction(rawInstruction, ref counter,ref actualLine);
                ++counter;
                ++actualLine;
            }
            m_ActualLineMap.Add(counter,isLabel ? actualLine-1:actualLine);
        }

        private bool InsertLabels(List<string> rawInstruction, ref int lineNumber)
        {
            int rawInstructionCount = rawInstruction.Count;
            rawInstruction.RemoveAll(str => string.IsNullOrEmpty(str));
            if (rawInstruction.Count == 1)
            {
                m_LabelMap[rawInstruction[0].Replace(":", "")] = lineNumber;
                --lineNumber;
                return true;
            }

            return true;

        }
        private bool CheckAndCreateFromRawInstruction(List<string> rawInstruction,ref int lineNumber,ref int actualLine)
        {
            int rawInstructionCount = rawInstruction.Count;
            rawInstruction.RemoveAll(str => string.IsNullOrEmpty(str));
            if (rawInstruction.Count == 1)
            {
                m_LabelMap[rawInstruction[0].Replace(":", "")] = lineNumber;
                --lineNumber;
                return true;
            }
            
            List<InstructionParams> requiredParams = GetInstructionParamsByName(rawInstruction[0]);
            // TODO validate each word - IsValidInstruction, IsValidImmediate, IsValidRegister
            // R type
           
            Instruction instruction = new DummyInstruction();
            switch (GetInitType(rawInstruction[0]))
            {
                case RawInstructionInitType.RIP_TYPE_1:

                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize( GetRegisterNumberByName(rawInstruction[1]),
                                            GetRegisterNumberByName(rawInstruction[2]),
                                            GetRegisterNumberByName(rawInstruction[3]),
                                            0/*DUMMY*/,
                                            GetInstructionFunctByName(rawInstruction[0])
                                           );


                    break;
                case RawInstructionInitType.RIP_TYPE_2:
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize( GetRegisterNumberByName(rawInstruction[1]),
                                            GetRegisterNumberByName(rawInstruction[2]),
                                            int.Parse(rawInstruction[3])
                                          );
                    break;
                case RawInstructionInitType.RIP_TYPE_3:
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize(0/*DUMMY*/,
                                            GetRegisterNumberByName(rawInstruction[1]),
                                            0/*DUMMY*/,
                                            0/*DUMMY*/,
                                            GetInstructionFunctByName(rawInstruction[0])
                                          );
                    break;
                case RawInstructionInitType.RIP_TYPE_4: 
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize( GetRegisterNumberByName(rawInstruction[1]),
                                            GetRegisterNumberByName(rawInstruction[3]),
                                            int.Parse(rawInstruction[2])
                                          );
                    break;

                case RawInstructionInitType.RIP_TYPE_5: 
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize( GetRegisterNumberByName(rawInstruction[1]),
                                            0,
                                            int.Parse(rawInstruction[2])
                                          );
                    break;

                case RawInstructionInitType.RIP_TYPE_6: 
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize( GetRegisterNumberByName(rawInstruction[1]),
                                            GetRegisterNumberByName(rawInstruction[2]),
                                            GetLabelAddress(rawInstruction[3])
                                          );
                    break;

                case RawInstructionInitType.RIP_TYPE_7: 
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize( GetLabelAddress(rawInstruction[1]) );
                    break;
                case RawInstructionInitType.RIP_TYPE_8:
                    instruction = InstructionFactory.Instance.GetInstruction(rawInstruction[0]);
                    instruction.Initialize(
                                            GetRegisterNumberByName(rawInstruction[1]),
                                            0/*DUMMY*/,
                                            0/*DUMMY*/,
                                            0/*DUMMY*/,
                                            GetInstructionFunctByName(rawInstruction[0])
                                          );
                    break;
            }

            MemoryHandler.Instance.InsertToInstructionMemoryByAddress(lineNumber, ref instruction);
            m_ActualLineMap.Add(lineNumber, actualLine);
            return true;
        }

        private int GetRegisterNumberByName(string name)
        {
            return RegisterHandlers.Instance.GetRegisterInfoByName(name);
        }

        private List<InstructionParams> GetInstructionParamsByName(string name)
        {
            return InstructionFactory.Instance.GetInstructionPropertyByName(name).m_InstructionParams;
        }

        private int GetInstructionFunctByName(string name)
        {
            return InstructionFactory.Instance.GetInstructionPropertyByName(name).m_Funct;
        }

        private RawInstructionInitType GetInitType(string name)
        {
            return InstructionFactory.Instance.GetInstructionPropertyByName(name).m_RawInstructionInitType;

        }

        private int GetLabelAddress(string name)
        {
            return m_LabelMap[name];
        }
        private string m_TextContent;
        private List<string> m_Lines;
        private List<List<string>> m_RawInstructionLines;
        private Dictionary<string, int> m_LabelMap;
        private Dictionary<int, int> m_ActualLineMap; //pc to actual line 
        private bool m_IsAssembled;
    }
}
