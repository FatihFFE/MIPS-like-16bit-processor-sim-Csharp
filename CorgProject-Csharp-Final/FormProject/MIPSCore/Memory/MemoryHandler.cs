using Corg_Project.MIPSCore.Instructions;

namespace Corg_Project.MIPSCore.Memory
{
    internal class MemoryHandler
    {
        private MemoryHandler() 
        {
            Initialize();
        }
        public void Initialize()
        {
            m_InstructionMemory = new InstructionMemory(0, 256); // TO DO : Get capacity from specs  // 1024 to 128
            m_DataMemory = new DataMemory(0, 256); // TO DO : Get capacity from specs  // 1024 to 128
        }
        private static MemoryHandler m_Instance;
        public static MemoryHandler Instance
        {
            get 
            { 
            if (m_Instance == null)
                m_Instance = new MemoryHandler();
            return m_Instance;
            }
        }
        //MEMBERS
        private InstructionMemory m_InstructionMemory;
        private DataMemory m_DataMemory;
        public bool InsertToDataMemoryByAddress(int address, byte value)
        {
            return m_DataMemory.InsertDataByAddress(address, value);
        }
        public byte GetFromDataMemoryByAddress(int address, out bool isSuccess)
        {
            return m_DataMemory.GetDataByAddress(address, out isSuccess);
        }
        
        
        public List<byte> GetDataMemory()
        {
            return m_DataMemory.GetAllData();
        }


        public List<Tuple<int,Instruction>> GetInstructionMemory()
        {
            return m_InstructionMemory.GetAllData();
        }

        public bool InsertToInstructionMemoryByAddress(int address, ref Instructions.Instruction value )
        {
            return m_InstructionMemory.InsertDataByAddress(address,ref value);
        }
        public Instructions.Instruction GetFromInstructionMemoryByAddress(int address, out bool isSucces)
        {
            return m_InstructionMemory.GetDataByAddress(address, out isSucces);
        }

        
    }
}
