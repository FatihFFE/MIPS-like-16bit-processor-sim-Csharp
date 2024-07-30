using Corg_Project.MIPSCore.Instructions;

namespace Corg_Project.MIPSCore.Memory
{
    public abstract class Memory
    {
        public Memory(int guardAddress, int capacity)
        {
            m_GuardAddress = guardAddress;
            m_Capacity = capacity;
        }
        
        

        //MEMBERS
        protected int m_GuardAddress = default;
        protected int m_Capacity = default;
    }
    public class InstructionMemory : Memory
    {
        public InstructionMemory(int guardAddress, int capacity) :
            base(guardAddress, capacity)
        {
            
            m_Data = Enumerable.Repeat(new DummyInstruction(), capacity).ToList<Instruction>();
            m_Data2 = Enumerable.Repeat(0, capacity).ToList<int>();
        }
        public List<Instruction> GetData
        {
            get
            {
                return m_Data;
            }
        }
        public bool InsertDataByAddress(int address, ref Instruction value)
        {
            Console.WriteLine($"Inserted to ins mem Line number {address}");
            if (address < 0 || address > m_Capacity)
                return false;
            m_Data[address] = value;

            m_Data2[address] = value.GetInstructionFormat;
            m_GuardAddress++;
            return true;
        }
        public Instruction GetDataByAddress(int address, out bool isSuccess)
        {
            isSuccess = (address >= 0 && address < m_Capacity && m_GuardAddress > address);
            if (isSuccess)
                return m_Data[address];
            else
                return m_Data[m_GuardAddress];
        }
        public List<Tuple<int,Instruction>> GetAllData()
        {
            List<Tuple<int, Instruction >> data = new List<Tuple<int, Instruction>>();
            for(int i = 0; i<m_Data.Count;i++)
            {
                data.Add(new Tuple<int,Instruction>(m_Data2[i], m_Data[i]));
            }
            return data;
        }

        //MEMBERS
        private List<Instruction> m_Data;
        private List<int> m_Data2;

    }
    public class DataMemory : Memory
    {
        public DataMemory(int address, int capacity) :
            base(address, capacity)
        {
            m_Data = Enumerable.Repeat((byte)0, capacity).ToList<byte>();
        }
        public List<byte> GetData
        {
            get
            {
                return m_Data;
            }
        }
        public bool InsertDataByAddress(int address, byte value)
        {
            if (address < 0 || address > m_Capacity)
                return false;
            m_Data[address] = value;
            return true;
        }
        public byte GetDataByAddress(int address, out bool isSuccess)
        {
            isSuccess = (address >= 0 && address < m_Capacity);
            if (isSuccess)
                return m_Data[address];
            else
                return 0;
        }

        public List<byte> GetAllData()
        {
            return m_Data;
        }

        //MEMBERS
        private List<byte> m_Data;
    }
}
