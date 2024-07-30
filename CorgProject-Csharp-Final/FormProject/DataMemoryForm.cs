using Corg_Project.MIPSCore.Memory;

namespace FormProject
{
    internal class DataMemoryForm
    {

        public DataMemoryForm(string address, byte memoryValue)
        {
            Address = address;
            MemoryValue = memoryValue;
        }

        public string Address { get; set; }
        public byte MemoryValue { get; set; }

        public static List<DataMemoryForm> FetchMemory()
        {
            List<DataMemoryForm> dataMemories = new List<DataMemoryForm>();
            int counter = 0;
            foreach(byte data in MemoryHandler.Instance.GetDataMemory())
                dataMemories.Add(new DataMemoryForm ( "0x"+ (counter++).ToString("X").PadLeft(4, '0'), data ));

            return dataMemories;
        }
    }
}
