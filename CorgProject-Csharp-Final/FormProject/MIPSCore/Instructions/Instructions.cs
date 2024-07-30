using Corg_Project.MIPSCore.Functions;
using Corg_Project.MIPSCore.Registers;


namespace Corg_Project.MIPSCore.Instructions
{

    //public delegate int Functionality1(ref Registers.Registers destination, in Registers.Registers source, in Registers.Registers target);

    public enum InstructionType
    {
        R, I, J, DUMMY
    }
    public abstract class Instruction
    {
        public Instruction(string name, InstructionType instructionType, int opCode, int instructionFormat)
        {
            m_Name = name;
            m_InstructionType = instructionType;
            m_OPCode = opCode;
            m_InstructionFormat = instructionFormat;
        }
        public abstract int Execute();
        public abstract int Initialize(params int[] parameters);
        public string GetName
        {
            get
            {
                return m_Name;
            }
            set
            {
                m_Name = value;
            }
        }
        public InstructionType GetInstructionType
        {
            get
            {
                return m_InstructionType;
            }
            set
            {
                m_InstructionType = value;
            }

        }
        public int GetOPCode
        {
            get
            {
                return m_OPCode;
            }
            set
            {
                m_OPCode = value;
            }

        }

        public int GetInstructionFormat
        {
            get
            {
                return m_InstructionFormat;
            }
        }

        //MEMBERS
        private string m_Name = default;
        private InstructionType m_InstructionType;
        protected int m_OPCode = default;
        protected int m_InstructionFormat;
        //private delegate m_Functionality = default;

    }

    public class InstructionFormatI : Instruction
    {
        public InstructionFormatI(string name, InstructionType instructionType, int opCode) :
            base(name, instructionType, opCode, 0)
        {
            //m_Functionality = (Functionality)FunctionHandlers.Instance.GetFunctionByKey(opCode);
            m_Functionality = FunctionHandlers.Instance.GetFunctionByKey(opCode) as FunctionDelegate2;

        }
        public override int Execute()
        {

            ref Registers.Registers source = ref RegisterHandlers.Instance.GetRegisterByIndex(m_Source);
            ref Registers.Registers target = ref RegisterHandlers.Instance.GetRegisterByIndex(m_Target);

            return m_Functionality(in source, ref target, m_Immediate);
        }
        public override int Initialize(params int[] parameters)
        {
            if (parameters.Length != 3)
                return -1;

            m_Target = parameters[0];
            m_Source = parameters[1];
            m_Immediate = parameters[2];
            m_InstructionFormat = (m_OPCode << 12) + (m_Source << 9) + (m_Target << 6) + m_Immediate;
            return 0;
        }
        
        private FunctionDelegate2 m_Functionality;
        private int m_Source = default;
        private int m_Target = default;
        private int m_Immediate = default;

    }
    public class InstructionFormatR : Instruction
    {
        public InstructionFormatR(string name, InstructionType instructionType, int opCode, int funct) :
            base(name, instructionType, opCode, 0)
        {
            m_Funct = funct;
            m_Functionality = FunctionHandlers.Instance.GetFunctionByKey(opCode) as FunctionDelegate1;
        }
        public override int Execute()
        {
            ref Registers.Registers destination = ref RegisterHandlers.Instance.GetRegisterByIndex(m_Destination);
            ref Registers.Registers source = ref RegisterHandlers.Instance.GetRegisterByIndex(m_Source);
            ref Registers.Registers target = ref RegisterHandlers.Instance.GetRegisterByIndex(m_Target);

            return m_Functionality(in source, in target, ref destination, m_Shamt, m_Funct);// in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct
        }
        public override int Initialize(params int[] parameters)
        {
            if (parameters.Length != 5)
                return -1;

            m_Destination = parameters[0];
            m_Source = parameters[1];
            m_Target = parameters[2];
            m_Shamt = parameters[3];
            //m_Funct = parameters[4];
            int m_OpCode2 = m_OPCode - (m_Funct << 5); 
            m_InstructionFormat = (m_OpCode2 << 12) + (m_Source << 9)  + (m_Destination << 6) + (m_Target << 3)  + m_Funct;

            return 0;
        }
        

        private FunctionDelegate1 m_Functionality;
        private int m_Destination = default;
        private int m_Source = default;
        private int m_Target = default;
        private int m_Shamt = default;
        private int m_Funct = default;
    }
    public class InstructionFormatJ : Instruction
    {
        public InstructionFormatJ(string name, InstructionType instructionType, int opCode) :
            base(name, instructionType, opCode, 0)
        {
            //m_Functionality = (Functionality)FunctionHandlers.Instance.GetFunctionByKey(opCode);
            m_Functionality = FunctionHandlers.Instance.GetFunctionByKey(opCode) as FunctionDelegate3;

        }

        public override int Execute()
        {
            return m_Functionality(m_Address);
        }
        public override int Initialize(params int[] parameters)
        {
            if (parameters.Length != 1)
                return -1;

            m_Address = parameters[0];
            m_InstructionFormat = (m_OPCode << 12) + m_Address;
            // TO DO : insert instruction memory 
            return 0;
        }
        
        private FunctionDelegate3 m_Functionality;
        private int m_Address = default;
    }

    public class DummyInstruction : Instruction
    {
        public DummyInstruction() :
            base("Empty", InstructionType.DUMMY, -1,0)
        {
        }

        public override int Execute()
        {
            return -1;
        }
        public override int Initialize(params int[] parameters)
        {
            return -1;
        }
    }
}
