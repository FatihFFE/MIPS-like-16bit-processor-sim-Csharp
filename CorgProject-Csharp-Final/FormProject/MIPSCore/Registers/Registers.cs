namespace Corg_Project.MIPSCore.Registers
{
    public enum UseCases 
    {
        Reg_TheConstantValue0,
        Reg_Temporaries, Reg_SavedTemporaries,
        Reg_ReturnAddress, Reg_ProgrammingCounter,Reg_Dummy
    }
    public enum PreservedCases 
    {
        Reg_NotAvailable, Reg_No, Reg_Yes
    }
    public class Registers
    {
        public int GetValue
        {
            get
            {
                return m_Value;
            }
            set
            {
                m_Value = (short)value;
            }
        }

        public string GetName
        {
            get
            {
                return m_Name;
            }
        }
       
        public Registers(string name, int number, UseCases use, PreservedCases isPreserved) {
            m_Name = name;
            m_Number = number;
            m_Use = use;
            m_IsPreserved = isPreserved;
        }
        public override string ToString()
        {
            return PrintOn();
        }
        private string PrintOn()
        {
            string message = string.Format("Name: {0}, Number: {1}, Use for: {2}, Is Preserved: {3}, Value: {4}\n", m_Name, m_Number, m_Use, m_IsPreserved, m_Value);
            return message;
        }
        // MEMBERS 
        private string m_Name = default;
        private int m_Number = default;
        private UseCases m_Use = default;
        private PreservedCases m_IsPreserved = default;
        private int m_Value = 0;
    }
}
