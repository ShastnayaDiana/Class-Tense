using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace Калькулятор
{
    public partial class History : Form
    {
        public History()
        {
            InitializeComponent();
        }

        public string path = @"..\..\history.txt";

        private void History_Load(object sender, EventArgs e)
        {
            StreamReader sr = new StreamReader(path, Encoding.Default);
            string line;
            while ((line = sr.ReadLine()) != null)
                textBox1.Text += line + "  ";
                //textBox1.Text += '\r'; //возврат коретки
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
