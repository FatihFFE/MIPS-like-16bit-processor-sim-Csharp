using Corg_Project.MIPSCore.Registers;
using Corg_Project.MIPSCore.Memory;


namespace Corg_Project.MIPSCore.Functions
{
    internal class Functions
    {
        // R TYPES
        public static int Add(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct) // NEDEN STATIC
        {
            destination.GetValue = source.GetValue + target.GetValue;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Sub(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = source.GetValue - target.GetValue;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int And(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = source.GetValue & target.GetValue;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Or(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = source.GetValue | target.GetValue;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Xor(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = source.GetValue ^ target.GetValue;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Nor(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            
            destination.GetValue = ~(source.GetValue | target.GetValue);
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Slt(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = source.GetValue < target.GetValue ? 1 : 0;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int JumpRegister(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)//( in Registers.Registers source, ref Registers.Registers programmingCounter) // R TYPE AMA TARGET, DESTINATION YOK
        {
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue = source.GetValue;
            return RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue;
        }

        public static int Sll(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = (int)((uint)source.GetValue << target.GetValue);
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Srl(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = (int)((uint)source.GetValue >> target.GetValue);
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Sra(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            destination.GetValue = (int)((uint)source.GetValue >> target.GetValue);
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Mult(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {


            int highBits = (int)(((long)source.GetValue * target.GetValue) >> 16); //(((long)source.GetValue * target.GetValue >> 32)); // Store high 32 bits
            int lowBits = (int)(((long)source.GetValue * target.GetValue) & 0xFFFF); // Store low 32 bits
            RegisterHandlers.Instance.GetRegisterByIndex(9).GetValue = highBits;
            RegisterHandlers.Instance.GetRegisterByIndex(10).GetValue = lowBits;

            destination.GetValue = lowBits;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        public static int Div(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            int highBits = (int)(((long)source.GetValue / target.GetValue) >> 16); //(((long)source.GetValue * target.GetValue >> 32)); // Store high 32 bits
            int lowBits = (int)(((long)source.GetValue / target.GetValue) & 0xFFFF); // Store low 32 bits
            RegisterHandlers.Instance.GetRegisterByIndex(9).GetValue = highBits;
            RegisterHandlers.Instance.GetRegisterByIndex(10).GetValue = lowBits;

            destination.GetValue = lowBits;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return destination.GetValue;
        }
        // I TYPES
        public static int Addi(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            target.GetValue = source.GetValue + immediate;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            Console.WriteLine("Addi function executed");
            return target.GetValue;
        }
        public static int Andi(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            target.GetValue = source.GetValue & immediate;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return target.GetValue;
        }
        public static int Ori(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            target.GetValue = source.GetValue | immediate;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return target.GetValue;
        }
        public static int Slti(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            target.GetValue = source.GetValue < immediate ? 1 : 0;
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return target.GetValue;
        }
        public static int Beq(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            if (source.GetValue == target.GetValue)
            {
                RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue = immediate;
            }


            return RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue;
        }
        public static int Bne(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            if (source.GetValue != target.GetValue)
            {
                RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue = immediate;
            }
            return RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue;
        }
        public static int Lw(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            bool isSuccess = false;
            int value = 0;
            for (int i = 0; i < 4; i++)
            {
                value += (int)(MemoryHandler.Instance.GetFromDataMemoryByAddress((source.GetValue + immediate + i), out isSuccess)) << (i * 8);

            }
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            target.GetValue = value;
            return target.GetValue;
        }
        public static int Sw(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            for (int i = 0; i < 4; i++)
            {
                MemoryHandler.Instance.InsertToDataMemoryByAddress((source.GetValue + immediate + i), (byte)(target.GetValue >> (8 * i)));
            }
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return target.GetValue;
        }
        public static int Lb(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            bool isSuccess = false;
            target.GetValue += (int)(MemoryHandler.Instance.GetFromDataMemoryByAddress((source.GetValue + immediate), out isSuccess));
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return target.GetValue;
        }
        public static int Sb(in Registers.Registers source, ref Registers.Registers target, int immediate)
        {
            MemoryHandler.Instance.InsertToDataMemoryByAddress((source.GetValue + immediate), (byte)(target.GetValue));
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            return target.GetValue;
        }

        // J TYPES
        public static int Jump(int jumpAddress)
        {
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue = jumpAddress;
            return jumpAddress;
        }
        public static int Jal(int jumpAddress)
        {
            RegisterHandlers.Instance.GetRegisterByIndex(7).GetValue = RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue + 1; 
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue = jumpAddress;
            return jumpAddress;
        }

        public static int Mfhi(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            destination.GetValue = RegisterHandlers.Instance.GetRegisterByIndex(9).GetValue;
            return destination.GetValue;
        }
        public static int Mflo(in Registers.Registers source, in Registers.Registers target, ref Registers.Registers destination, int shamt, int funct)
        {
            RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue += 1;
            destination.GetValue = RegisterHandlers.Instance.GetRegisterByIndex(10).GetValue;
            return destination.GetValue;
        }
    }
}
