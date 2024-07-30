using Corg_Project.MIPSCore.Instructions;
using Corg_Project.MIPSCore.Memory;

namespace FormProject
{
    internal class InstMemoryForm
    {
        public InstMemoryForm(string address, string memoryValue, string instructionName)
        {
            Address = address;
            MemoryValue = memoryValue;
            InstructionName = instructionName;
        }

        public string InstructionName { get; set; }
        public string Address { get; set; }
        public string MemoryValue { get; set; }

        public static List<InstMemoryForm> FetchMemory()
        {
            List<InstMemoryForm> dataMemories = new List<InstMemoryForm>();
            int counter = 0;
            foreach (Tuple<int,Instruction> data in MemoryHandler.Instance.GetInstructionMemory())
                dataMemories.Add(new InstMemoryForm("0x" + (counter++).ToString("X").PadLeft(4, '0'),"0x" + data.Item1.ToString("X").PadLeft(4,'0') ,data.Item2.GetName));
            return dataMemories;
        }
    }
}
