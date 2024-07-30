
namespace Corg_Project.MIPSCore.Registers
{
    internal class RegisterHandlers
    {
        
        
        private static RegisterHandlers m_Instance;
        private RegisterHandlers() 
        {
            Initialize();
        }
        public void Initialize()
        {
            m_RegisterSet[0] = new Registers("$zero", 0, UseCases.Reg_TheConstantValue0, PreservedCases.Reg_NotAvailable);
            m_RegisterSet[1] = new Registers("$t0", 1, UseCases.Reg_Temporaries, PreservedCases.Reg_No);
            m_RegisterSet[2] = new Registers("$t1", 2, UseCases.Reg_Temporaries, PreservedCases.Reg_No);
            m_RegisterSet[3] = new Registers("$t2", 3, UseCases.Reg_Temporaries, PreservedCases.Reg_No);
            m_RegisterSet[4] = new Registers("$t3", 4, UseCases.Reg_Temporaries, PreservedCases.Reg_No);
            m_RegisterSet[5] = new Registers("$s0", 5, UseCases.Reg_SavedTemporaries, PreservedCases.Reg_Yes);
            m_RegisterSet[6] = new Registers("$s1", 6, UseCases.Reg_SavedTemporaries, PreservedCases.Reg_Yes);
            m_RegisterSet[7] = new Registers("$ra", 7, UseCases.Reg_ReturnAddress, PreservedCases.Reg_No);
            m_RegisterSet[8] = new Registers("$PC", 8, UseCases.Reg_ProgrammingCounter, PreservedCases.Reg_Yes);
            m_RegisterSet[9] = new Registers("$hi", 9, UseCases.Reg_ProgrammingCounter, PreservedCases.Reg_Yes);
            m_RegisterSet[10] = new Registers("$lo", 10, UseCases.Reg_ProgrammingCounter, PreservedCases.Reg_Yes);
        }
        public static RegisterHandlers Instance 
        { 
            get 
            {
                if(m_Instance == null)
                    m_Instance = new RegisterHandlers();
                return m_Instance;
            }
        }   

        public static Registers DummyRegister
        {
            get
            {
                return new Registers("Dummy",33, UseCases.Reg_Dummy, PreservedCases.Reg_NotAvailable);
            }
        }
        public override string ToString()
        {
            return PrintOn();
        }
        private string PrintOn()
        {
            string message = "";
            foreach(Registers reg in m_RegisterSet)
            {
                message += reg;
            }
            return message;
        }

        public ref Registers GetRegisterByIndex(int index) 
        {
            return ref m_RegisterSet[index];
        }

        public int GetRegisterInfoByName(string name)
        {
            int i = 0;

            foreach (Registers reg in m_RegisterSet)
            {
                if (reg.GetName == name)
                    break;

                ++i;
            }
                
            
            return i;
        }



        Registers[] m_RegisterSet = new Registers[11];
    }
}
