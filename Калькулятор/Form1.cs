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
    public partial class Form1 : Form
    {
        bool res = false;
        string operation;
        History history = new History();
        public string path = @"..\..\history.txt";

        Calculater c = new Calculater();

        public Form1()
        {
            InitializeComponent();
        }

        private void Load_(object sender, EventArgs e)
        {
        }

        private void button_clear_Click(object sender, EventArgs e)
        {
            Clear();
        }

        private void Clear()
        {

            label_res.Text = "";
            label_action.Text = "";
            operation = ""; ;

        }

        private void Writer(string str)
        {
            using (StreamWriter stream_Writer = new StreamWriter(path, true, Encoding.Default))//true - добавление данных,иначе перезапись
            {
                stream_Writer.WriteLine(str);
            }
        }

        private void BinaryOperation(object sender, EventArgs e)
        {
            try
            {
                Button button = (Button)sender;
                if (label_res.Text != "")
                {
                    operation = button.Text;

                    label_action.Text = label_res.Text + operation;
                    label_res.Text = "";
                }
            }
            catch
            {
                Clear();

            }
        }

        private void Show_Num(object sender, EventArgs e)
        {
            if (res)
            {
                label_res.Text = "";
                res = false;
            }

            Button button = (Button)sender;
            if (label_res.Text.Length < 14)
            {
                label_res.Text += button.Text;
            }
        }

        private void Rez()
        {
            try
            {
                label_action.Text += label_res.Text;
                label_res.Text = Convert.ToString(c.Result(label_action.Text));
                Writer(label_action.Text + "=" + label_res.Text + ";   "); 
                label_action.Text = "";
                operation = "";
                res = true;
            }
            catch
            {
                Clear();
            }
        }

        private void button_res_Click(object sender, EventArgs e)
        {
            Rez();
        }

        private void TrigOperation(object sender, EventArgs e)
        {
            try
            {
                Button button = (Button)sender;
                operation = "one_operator";
                label_res.Text += operation + button.Text;
                label_res.Text = Convert.ToString(c.Result(label_res.Text));
            }
            catch
            {
                Clear();
            }
        }

        private void UnaryOperation(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            switch (button.Text)
            {
                case "±":
                    try
                    {
                        label_res.Text = Convert.ToString(Convert.ToDouble(label_res.Text) * -1);
                    }
                    catch
                    {
                        Clear();
                    }
                    break;

                case ",":
                    if (!label_res.Text.Contains(","))
                        if (label_res.Text == "")
                            label_res.Text += "0,";
                        else
                            label_res.Text += ",";
                    break;
            }
        }

        private void Math_const(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            if (button.Text == "pi")
                label_res.Text = "3,14";
            else if (button.Text == "e")
                label_res.Text = "2,71";
        }

        private void button_convertToGrad_Click(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            if ((button.Text == "sin") || (button.Text == "cos") || (button.Text == "tg")) 
                label_res.Text = Convert.ToString(Convert.ToDouble(label_res.Text) * 180 / 3.14);
        }

        void Key(object sender, KeyEventArgs e)
        {
            if (!(ModifierKeys == Keys.Shift))
                switch (e.KeyCode)
                {
                    case Keys.NumPad1:
                        label_res.Text += "1";
                        break;
                    case Keys.NumPad2:
                        label_res.Text += "2";
                        break;
                    case Keys.NumPad3:
                        label_res.Text += "3";
                        break;
                    case Keys.NumPad4:
                        label_res.Text += "4";
                        break;
                    case Keys.NumPad5:
                        label_res.Text += "5";
                        break;
                    case Keys.NumPad6:
                        label_res.Text += "6";
                        break;
                    case Keys.NumPad7:
                        label_res.Text += "7";
                        break;
                    case Keys.NumPad8:
                        label_res.Text += "8";
                        break;
                    case Keys.NumPad9:
                        label_res.Text += "9";
                        break;
                    case Keys.NumPad0:
                        label_res.Text += "0";
                        break;
                    case Keys.Delete:
                        Clear();
                        break;
                    case Keys.Add:
                        label_action.Text += label_res.Text + "+";
                        label_res.Text = "";
                        break;
                    case Keys.Subtract:
                        label_action.Text += label_res.Text + "-";
                        label_res.Text = "";
                        break;
                    case Keys.Divide:
                        label_action.Text += label_res.Text + "/";
                        label_res.Text = "";
                        break;
                    case Keys.Z://запятая
                        label_res.Text += ",";
                        break;
                    case Keys.Multiply:
                        label_action.Text += label_res.Text + "*";
                        label_res.Text = "";
                        break;
                    case Keys.Enter:
                        Rez();
                        break;
                }
            else if (e.KeyCode == Keys.D6){
                label_action.Text += label_res.Text + "^";
                label_res.Text = "";
                }
        }
        

        private void Key_Down(object sender, KeyEventArgs e)
        {
            Key(sender, e);
        }

        private void button_history_Click(object sender, EventArgs e)
        {
            if (!history.IsDisposed)
                history.Show();
     
            else if (!history.Created)
            {
                History history = new History();
                history.Show();
            }
        }
    }
}
