using System.Data;
using System.Windows.Forms;
using Corg_Project.MainLogic;
using Corg_Project.MIPSCore;
using Corg_Project.MIPSCore.Memory;

namespace FormProject
{
    public partial class Form1 : Form
    {
        bool isAssembled = false;
        public Form1()
        {
            InitializeComponent();
            registerData.DataSource = RegisterForm.initiliaze();
            DataMemoryDataGrid.DataSource = DataMemoryForm.FetchMemory();
            MemoryInstructionDataGrid.DataSource = InstMemoryForm.FetchMemory();

        }

        private void RunButton_Click(object sender, EventArgs e)
        {
            isAssembled = true;
            registerData.DataSource = RegisterForm.initiliaze();
            MainLogic.Instance.AssembleProgram(editTextbox.Text);
            DataMemoryDataGrid.DataSource = DataMemoryForm.FetchMemory();
            MemoryInstructionDataGrid.DataSource = InstMemoryForm.FetchMemory();
            label1.Text = (MainLogic.Instance.GetActualLineNumber() + 1).ToString();
            var firstLine = editTextbox.Lines[MainLogic.Instance.GetActualLineNumber()];
            var start = editTextbox.GetFirstCharIndexFromLine(MainLogic.Instance.GetActualLineNumber());
            editTextbox.Select(start, firstLine.Length);
            editTextbox.Select();
        }

        private void StartButton_Click(object sender, EventArgs e)
        {
            int rowCount = editTextbox.Lines.Count();
            if (isAssembled == true)
            {
                bool success;
                for (int i = 0; ; i++)
                {
                    if (MainLogic.Instance.IsNextInstructionValid())
                    {
                        MainLogic.Instance.RunNextInstruction(out success);
                    }
                    else
                    {
                        break;
                    }

                }
                registerData.DataSource = RegisterForm.Refresh();
                DataMemoryDataGrid.DataSource = DataMemoryForm.FetchMemory();
                MemoryInstructionDataGrid.DataSource = InstMemoryForm.FetchMemory();
                isAssembled = false;
                label1.Text = (MainLogic.Instance.GetActualLineNumber() + 1).ToString();
            }
        }

        private void ContinueButton_Click(object sender, EventArgs e)
        {
            if (isAssembled == true)
            {
                bool success;
                if (MainLogic.Instance.IsNextInstructionValid())
                {
                    MainLogic.Instance.RunNextInstruction(out success);
                }

                try
                {
                    editTextbox.Select();
                    var firstLine = editTextbox.Lines[MainLogic.Instance.GetActualLineNumber()];
                    var start = editTextbox.GetFirstCharIndexFromLine(MainLogic.Instance.GetActualLineNumber());
                    editTextbox.Select(start, firstLine.Length);
                    registerData.DataSource = RegisterForm.Refresh();
                    DataMemoryDataGrid.DataSource = DataMemoryForm.FetchMemory();
                    MemoryInstructionDataGrid.DataSource = InstMemoryForm.FetchMemory();
                    label1.Text = (MainLogic.Instance.GetActualLineNumber() + 1).ToString();
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Error Message:" + ex.Message);
                }
            }
        }

        private void splitContainer2_Panel2_Paint(object sender, PaintEventArgs e)
        {

        }
        private void Form1_Load(object sender, EventArgs e)
        {
            // ... (diğer kodlarınız)

            CustomizeDataGridView(registerData);
            CustomizeDataGridView(DataMemoryDataGrid);
            CustomizeDataGridView(MemoryInstructionDataGrid);
        }
        private void CustomizeDataGridView(DataGridView dataGridView)
        {
            dataGridView.EnableHeadersVisualStyles = false;
            dataGridView.ColumnHeadersDefaultCellStyle.BackColor = Color.Blue;

            // Başlık Satırı
            dataGridView.ColumnHeadersDefaultCellStyle.BackColor = Color.LightGray;
            dataGridView.ColumnHeadersDefaultCellStyle.ForeColor = Color.Black;

            // Satır Numaraları (Row Headers)
            dataGridView.RowHeadersDefaultCellStyle.BackColor = Color.LightBlue;
            dataGridView.RowHeadersDefaultCellStyle.ForeColor = Color.Black;
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}