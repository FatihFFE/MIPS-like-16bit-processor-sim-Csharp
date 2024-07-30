using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Corg_Project.MIPSCore.Specs
{
    public class Specifications
    {
        public Specifications(int instructionMemorySize = 1024, int dataMemorySize = 1024, int registerWide = 32) 
        {
            m_InstructionMemorySize = instructionMemorySize;
            m_DataMemorySize = dataMemorySize;
            m_RegisterWide = registerWide;
        }
        public int GetInstructionMemorySize
        {
            get 
            { 
                return m_InstructionMemorySize;
            }
            set 
            {
                m_InstructionMemorySize = value; 
            }
        }
        public int GetDataMemorySize
        {
            get
            {
                return m_DataMemorySize;
            }
            set
            {
                m_DataMemorySize = value;
            }
        }
        public int GetRegisterWide
        {
            get
            {
                return m_RegisterWide;
            }
            set
            {
                m_RegisterWide = value;
            }
        }
        private int m_InstructionMemorySize = default;
        private int m_DataMemorySize = default;
        private int m_RegisterWide = default;

    }
}
