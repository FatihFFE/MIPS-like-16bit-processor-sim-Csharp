using Corg_Project.MIPSCore.Registers;

namespace FormProject
{
    internal class RegisterForm
    {
        public string Name { get; set; }
        public int? Number { get; set; }
        public string Value { get; set; }

        public static List<RegisterForm> initiliaze()
        {
            List<RegisterForm> registers = new()
            {
                new RegisterForm {Name ="$zero",Number = 0,Value = "0x0000"},
                new RegisterForm {Name ="$t0",Number = 1,Value = "0x0000"},
                new RegisterForm {Name ="$t1",Number = 2,Value = "0x0000"},
                new RegisterForm {Name ="$t2",Number = 3,Value = "0x0000"},
                new RegisterForm {Name ="$t3",Number = 4,Value = "0x0000"},
                new RegisterForm {Name ="$s0",Number = 5,Value = "0x0000"},
                new RegisterForm {Name ="$s1",Number = 6,Value = "0x0000"},
                new RegisterForm {Name ="$ra",Number = 7,Value = "0x0000"},
                new RegisterForm {Name ="$pc",Number = 8,Value = "0x0000"},
                new RegisterForm {Name ="$hi",Number = 9,Value = "0x0000"},
                new RegisterForm {Name ="$lo",Number = 10,Value = "0x0000"},
            };
            return registers;
        }
        public static List<RegisterForm> Refresh() 
        {
            List<RegisterForm> registers = new()
            {
                new RegisterForm {Name ="$zero",Number = 0,Value = "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(0).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$t0",Number = 1,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(1).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$t1",Number = 2,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(2).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$t2",Number = 3,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(3).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$t3",Number = 4,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(4).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$s0",Number = 5,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(5).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$s1",Number = 6,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(6).GetValue)).ToString("X").PadLeft(4,'0'))}, 
                new RegisterForm {Name ="$ra",Number = 7,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(7).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$pc",Number = 8,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(8).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$hi",Number = 9,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(9).GetValue)).ToString("X").PadLeft(4,'0'))},
                new RegisterForm {Name ="$lo",Number = 10,Value =  "0x" + (((short)(RegisterHandlers.Instance.GetRegisterByIndex(10).GetValue)).ToString("X").PadLeft(4,'0'))},
            };
            return registers;
        }
    }
}
