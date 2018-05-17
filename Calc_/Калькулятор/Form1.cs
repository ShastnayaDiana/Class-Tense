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

        //Очистка данных
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

        //Запись истории в файл
        private void Writer(string str)
        {
            using (StreamWriter stream_Writer = new StreamWriter(path, true, Encoding.Default))//true - добавление данных,иначе перезапись
            {
                stream_Writer.WriteLine(str);
            }
        }

        //Работа с бинарными операциями
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

        //Обработка нажатия клавиш 0-9
        private void Show_Num(object sender, EventArgs e)
        {
            if (res)
            {
                label_res.Text = "";
                res = false;
            }

            Button button = (Button)sender;
            if (label_res.Text.Length < 14)
                label_res.Text += button.Text;
        }

        //результат
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
            catch(DivideByZeroException)
            {
                label_res.Text = "Запрещено /0";
            }
            catch
            {
                Clear();               
            }
        }

        //Обработка нажатия =
        private void button_res_Click(object sender, EventArgs e)
        {
            Rez();
        }

        //Нажатие тригонамитрических финкций
        private void TrigOperation(object sender, EventArgs e)
        {
            try
            {
                Button button = (Button)sender;
                operation = "one_operator";
                //если нужно произвести изменения в градусах
                if ((button.Text == "cos" || button.Text == "sin" || button.Text == "tg") && checkBox_radToGrad.Checked)
                    if ((button.Text == "tg") && (label_res.Text == "90")) label_res.Text = "Ошибка!";
                        else label_res.Text = Convert.ToString(Math.Round(Convert.ToDouble(c.Result(Convert.ToString(Convert.ToDouble(label_res.Text) * Math.PI / 180) + operation + button.Text)), 13));
                else
                      label_res.Text = Convert.ToString(Math.Round(Convert.ToDouble(c.Result(label_res.Text + operation + button.Text)), 13));
            }
            catch (DivideByZeroException)
            {
                label_res.Text = "Ошибка";
            }
            catch
            {
                Clear();
            }
        }

        //обработка унарных операций
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

        //нажатие математических констант
        private void Math_const(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            if (button.Text == "pi")
                label_res.Text = Convert.ToString(Math.PI);
            else if (button.Text == "e")
                label_res.Text = Convert.ToString(Math.E);
        }

        //Выводит соответствующую клавишу 0-9, ввод с клавиатуры
        void print_num(int str)
        {
            label_res.Text += Convert.ToString(str - 96);
        }

        //Выводит соответствующую клавишу /, *, -, +, ввод с клавиатуры
        void print_operation(int str)
        {
            label_action.Text += label_res.Text + Convert.ToChar(str-64);
            label_res.Text = "";
        }

        //Обработка нажатий с клавиатуры
        void Key(object sender, KeyEventArgs e)
        {
            if (!(ModifierKeys == Keys.Shift))
            {
                if ((e.KeyCode == Keys.NumPad1) || (e.KeyCode == Keys.NumPad2) || (e.KeyCode == Keys.NumPad3) || (e.KeyCode == Keys.NumPad4)
                     || (e.KeyCode == Keys.NumPad5) || (e.KeyCode == Keys.NumPad6) || (e.KeyCode == Keys.NumPad7) || (e.KeyCode == Keys.NumPad8)
                     || (e.KeyCode == Keys.NumPad9) || (e.KeyCode == Keys.NumPad0))
                         print_num(e.KeyValue);
                else if (e.KeyCode == Keys.Delete)
                    Clear();
                else if ((e.KeyCode == Keys.Add) || (e.KeyCode == Keys.Subtract) || (e.KeyCode == Keys.Multiply) || (e.KeyCode == Keys.Divide))
                    print_operation(e.KeyValue);
            }
        }
        

        private void Key_Down(object sender, KeyEventArgs e)
        {
            Key(sender, e);
        }

        //история
        private void button_history_Click(object sender, EventArgs e)
        {
            if (!history.IsDisposed)
                history.Show();
     
            else if (!history.Created)
            {
                bool show = false;
                History history = new History();
                if (!show)
                {
                    history.Show();
                    show = true;
                }
            }
        }

        private void Changed(object sender, EventArgs e)
        {

        }
    }
}
