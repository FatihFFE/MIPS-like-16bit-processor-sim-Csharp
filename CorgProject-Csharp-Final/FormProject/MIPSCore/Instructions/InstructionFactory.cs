
namespace Corg_Project.MIPSCore.Instructions
{
    public enum InstructionParams
    {
        IP_INSTRUCTION_NAME,
        IP_REGISTER,
        IP_IMMEDIATE,
        IP_LABEL
    }

    public enum RawInstructionInitType
    {
        RIP_TYPE_1, //  $t0, $t1, $t2
        RIP_TYPE_2, //  $t0 ,$t1, imm 
        RIP_TYPE_3, //  $t0 jumpregister
        RIP_TYPE_4, //  $t0 0($t1) lw $t0 0($t1)
        RIP_TYPE_5, //  lui $t0, 0x1234
        RIP_TYPE_6, //  beq bne label
        RIP_TYPE_7,  // jump label
        RIP_TYPE_8  // mfhi mflo

    }

    public struct InstructionProperty
    {
        public InstructionType m_Type;
        public int m_OPCode;
        public int m_Funct;
        public int m_CalculatedOPCode;
        public List<InstructionParams> m_InstructionParams;
        public RawInstructionInitType m_RawInstructionInitType;
        public InstructionProperty(InstructionType instructionType, int OPCode, int funct, RawInstructionInitType rawInstructionInitType, List<InstructionParams> instructionParams)
        {
            m_Type = instructionType;
            m_OPCode = OPCode;
            m_Funct = funct;
            m_RawInstructionInitType = rawInstructionInitType;
            m_InstructionParams = instructionParams;
            m_CalculatedOPCode = (funct << 4) + m_OPCode;
        }
    }
    public class InstructionFactory
    {

        private static InstructionFactory m_Instance;
        private InstructionFactory()
        {
            m_InstructionPropertyMap = new Dictionary<string, InstructionProperty>
            {
                // R TYPES
                { "add" ,
                    new InstructionProperty(InstructionType.R,0, 0, RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams> {InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER })
                },
                {
                    "sub",
                    new InstructionProperty(InstructionType.R,0,1,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                {
                    "and",
                    new InstructionProperty(InstructionType.R,0,2,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                {
                    "or",
                    new InstructionProperty(InstructionType.R,0,3,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                {
                    "xor",
                    new InstructionProperty(InstructionType.R,0,4,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                
                {
                    "slt",
                    new InstructionProperty(InstructionType.R,0,7,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                {
                    "sll",
                    new InstructionProperty(InstructionType.R,0,5,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                {
                    "srl",
                    new InstructionProperty(InstructionType.R,0,6,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                
                {
                    "jr",
                    new InstructionProperty(InstructionType.R,1,0,RawInstructionInitType.RIP_TYPE_3,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER})
                },
                {
                    "mult",
                    new InstructionProperty(InstructionType.R,1,1,RawInstructionInitType.RIP_TYPE_1,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER,InstructionParams.IP_REGISTER})
                },
                
                // I TYPES

                { "addi",
                new InstructionProperty(InstructionType.I,2,0,RawInstructionInitType.RIP_TYPE_2,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER , InstructionParams.IP_IMMEDIATE})
                },
                { "andi",
                new InstructionProperty(InstructionType.I,3,0,RawInstructionInitType.RIP_TYPE_2,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER , InstructionParams.IP_IMMEDIATE})
                },
                { "ori",
                new InstructionProperty(InstructionType.I,4,0,RawInstructionInitType.RIP_TYPE_2,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER , InstructionParams.IP_IMMEDIATE})
                },
                { "slti",
                new InstructionProperty(InstructionType.I,11,0,RawInstructionInitType.RIP_TYPE_2,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER , InstructionParams.IP_IMMEDIATE})
                },
                { "lw",
                new InstructionProperty(InstructionType.I,8,0,RawInstructionInitType.RIP_TYPE_4,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_IMMEDIATE , InstructionParams.IP_REGISTER})
                },
                { "sw",
                new InstructionProperty(InstructionType.I,10, 0,RawInstructionInitType.RIP_TYPE_4,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_IMMEDIATE , InstructionParams.IP_IMMEDIATE})
                },
                { "lb",
                new InstructionProperty(InstructionType.I,7, 0,RawInstructionInitType.RIP_TYPE_4,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_IMMEDIATE , InstructionParams.IP_IMMEDIATE})
                },
                { "sb",
                new InstructionProperty(InstructionType.I,9, 0,RawInstructionInitType.RIP_TYPE_4,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_IMMEDIATE , InstructionParams.IP_IMMEDIATE})
                },
              
                { "beq",
                new InstructionProperty(InstructionType.I,5, 0,RawInstructionInitType.RIP_TYPE_6,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER , InstructionParams.IP_LABEL})
                },
                { "bne",
                new InstructionProperty(InstructionType.I,6, 0,RawInstructionInitType.RIP_TYPE_6,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_REGISTER , InstructionParams.IP_LABEL})
                },
                // J TYPES
                { "j",
                new InstructionProperty(InstructionType.J,12, 0,RawInstructionInitType.RIP_TYPE_7,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_LABEL})
                },
                { "jal",
                new InstructionProperty(InstructionType.J,13, 0,RawInstructionInitType.RIP_TYPE_7,
                new List<InstructionParams> { InstructionParams.IP_INSTRUCTION_NAME, InstructionParams.IP_REGISTER, InstructionParams.IP_LABEL})
                },
                { "mfhi",
                new InstructionProperty(InstructionType.R,1,2,RawInstructionInitType.RIP_TYPE_8,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER})
                },
                { "mflo",
                new InstructionProperty(InstructionType.R,1,3,RawInstructionInitType.RIP_TYPE_8,
                    new List<InstructionParams>{InstructionParams.IP_INSTRUCTION_NAME,InstructionParams.IP_REGISTER})
                },
            };
        }

        public static InstructionFactory Instance
        {
            get
            {
                if (m_Instance == null)
                    m_Instance = new InstructionFactory();
                return m_Instance;
            }
        }
        public Instruction GetInstruction(string name)
        {
            switch (m_InstructionPropertyMap[name].m_Type)
            {
                case InstructionType.R:
                    return new InstructionFormatR(name, InstructionType.R, m_InstructionPropertyMap[name].m_CalculatedOPCode, m_InstructionPropertyMap[name].m_Funct); //TO DO: FIX DUMMY 
                    break;
                case InstructionType.I:
                    return new InstructionFormatI(name, InstructionType.I, m_InstructionPropertyMap[name].m_CalculatedOPCode);
                    break;
                case InstructionType.J:
                    return new InstructionFormatJ(name, InstructionType.J, m_InstructionPropertyMap[name].m_CalculatedOPCode);
                    break;
            }
            // TO DO: Return dummy 
            return new InstructionFormatR(name, InstructionType.R, m_InstructionPropertyMap[name].m_CalculatedOPCode, m_InstructionPropertyMap[name].m_Funct);
        }

        public InstructionProperty GetInstructionPropertyByName(string name)
        {
            
            return m_InstructionPropertyMap[name];  
            
        } //System.Collections.Generic.KeyNotFoundException

        private Dictionary<string, InstructionProperty> m_InstructionPropertyMap;

    }
}
