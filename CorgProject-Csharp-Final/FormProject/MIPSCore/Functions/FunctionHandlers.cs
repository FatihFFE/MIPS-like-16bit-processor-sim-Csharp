

namespace Corg_Project.MIPSCore.Functions
{
    public delegate int FunctionDelegate1(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct); // (ref Registers.Registers destination, in Registers.Registers source, in Registers.Registers target);
    public delegate int FunctionDelegate2(in Registers.Registers source, ref Registers.Registers target, int immediate);
    public delegate int FunctionDelegate3(int address);

    internal class FunctionHandlers
    {
        private FunctionHandlers() 
        {
            m_FunctionMap = new Dictionary<int, Delegate>();
            //R TYPE 
            m_FunctionMap[0x0] = (FunctionDelegate1)(Functions.Add);
            m_FunctionMap[0x10] = (FunctionDelegate1)(Functions.Sub); 
            m_FunctionMap[0x20] = (FunctionDelegate1)(Functions.And);
            m_FunctionMap[0x30] = (FunctionDelegate1)(Functions.Or);
            m_FunctionMap[0x40] = (FunctionDelegate1)(Functions.Xor);
            m_FunctionMap[0x70] = (FunctionDelegate1)(Functions.Slt);
            m_FunctionMap[0x1] = (FunctionDelegate1)(Functions.JumpRegister);
            m_FunctionMap[0x50] = (FunctionDelegate1)(Functions.Sll);
            m_FunctionMap[0x60] = (FunctionDelegate1)(Functions.Srl); 
            m_FunctionMap[0x11] = (FunctionDelegate1)(Functions.Mult);
            m_FunctionMap[0x21] = (FunctionDelegate1)(Functions.Mfhi);
            m_FunctionMap[0x31] = (FunctionDelegate1)(Functions.Mflo);
            // I TYPE
            m_FunctionMap[0x2] = (FunctionDelegate2)(Functions.Addi);
            m_FunctionMap[0x3] = (FunctionDelegate2)(Functions.Andi);
            m_FunctionMap[0x4] = (FunctionDelegate2)(Functions.Ori);
            m_FunctionMap[0xB] = (FunctionDelegate2)(Functions.Slti);
            m_FunctionMap[0x8] = (FunctionDelegate2)(Functions.Lw); 
            m_FunctionMap[0xA] = (FunctionDelegate2)(Functions.Sw);
            m_FunctionMap[0x7] = (FunctionDelegate2)(Functions.Lb);
            m_FunctionMap[0x9] = (FunctionDelegate2)(Functions.Sb);  
            m_FunctionMap[0x5] = (FunctionDelegate2)(Functions.Beq);
            m_FunctionMap[0x6] = (FunctionDelegate2)(Functions.Bne);
            // J TYPE
            m_FunctionMap[0xC] = (FunctionDelegate3)(Functions.Jump);
            m_FunctionMap[0xD] = (FunctionDelegate3)(Functions.Jal);

        }
        public Delegate GetFunctionByKey(int key)
        {
            return m_FunctionMap[key];
        }

        private static FunctionHandlers m_Instance;
        public static FunctionHandlers Instance
        {
            get
            {
                if (m_Instance == null)
                    m_Instance = new FunctionHandlers();
                return m_Instance;
            }
        }
        private Dictionary<int, Delegate> m_FunctionMap;

    }
}
