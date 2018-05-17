namespace Калькулятор
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button6 = new System.Windows.Forms.Button();
            this.button7 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.button9 = new System.Windows.Forms.Button();
            this.button_0 = new System.Windows.Forms.Button();
            this.button_point = new System.Windows.Forms.Button();
            this.button_res = new System.Windows.Forms.Button();
            this.button_sum = new System.Windows.Forms.Button();
            this.button_sub = new System.Windows.Forms.Button();
            this.button_mul = new System.Windows.Forms.Button();
            this.button_div = new System.Windows.Forms.Button();
            this.button_step = new System.Windows.Forms.Button();
            this.button_signal = new System.Windows.Forms.Button();
            this.button_clear = new System.Windows.Forms.Button();
            this.button_sin = new System.Windows.Forms.Button();
            this.button_cos = new System.Windows.Forms.Button();
            this.button_tg = new System.Windows.Forms.Button();
            this.button_ln = new System.Windows.Forms.Button();
            this.button_e = new System.Windows.Forms.Button();
            this.button_pi = new System.Windows.Forms.Button();
            this.button_fac = new System.Windows.Forms.Button();
            this.label_res = new System.Windows.Forms.Label();
            this.label_action = new System.Windows.Forms.Label();
            this.button_convertToRad = new System.Windows.Forms.Button();
            this.button_history = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button1.Location = new System.Drawing.Point(12, 301);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(41, 39);
            this.button1.TabIndex = 0;
            this.button1.Text = "1";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.Show_Num);
            this.button1.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button2
            // 
            this.button2.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button2.Location = new System.Drawing.Point(59, 303);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(41, 39);
            this.button2.TabIndex = 1;
            this.button2.Text = "2";
            this.button2.UseVisualStyleBackColor = false;
            this.button2.Click += new System.EventHandler(this.Show_Num);
            this.button2.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button3
            // 
            this.button3.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button3.Location = new System.Drawing.Point(106, 303);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(41, 39);
            this.button3.TabIndex = 2;
            this.button3.Text = "3";
            this.button3.UseVisualStyleBackColor = false;
            this.button3.Click += new System.EventHandler(this.Show_Num);
            this.button3.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button4
            // 
            this.button4.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button4.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button4.Location = new System.Drawing.Point(12, 256);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(41, 39);
            this.button4.TabIndex = 3;
            this.button4.Text = "4";
            this.button4.UseVisualStyleBackColor = false;
            this.button4.Click += new System.EventHandler(this.Show_Num);
            this.button4.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button5
            // 
            this.button5.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button5.Location = new System.Drawing.Point(59, 256);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(41, 39);
            this.button5.TabIndex = 4;
            this.button5.Text = "5";
            this.button5.UseVisualStyleBackColor = false;
            this.button5.Click += new System.EventHandler(this.Show_Num);
            this.button5.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button6
            // 
            this.button6.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button6.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button6.Location = new System.Drawing.Point(106, 256);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(41, 39);
            this.button6.TabIndex = 5;
            this.button6.Text = "6";
            this.button6.UseVisualStyleBackColor = false;
            this.button6.Click += new System.EventHandler(this.Show_Num);
            this.button6.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button7
            // 
            this.button7.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button7.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button7.Location = new System.Drawing.Point(12, 211);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(41, 39);
            this.button7.TabIndex = 6;
            this.button7.Text = "7";
            this.button7.UseVisualStyleBackColor = false;
            this.button7.Click += new System.EventHandler(this.Show_Num);
            this.button7.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button8
            // 
            this.button8.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button8.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button8.Location = new System.Drawing.Point(59, 211);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(41, 39);
            this.button8.TabIndex = 7;
            this.button8.Text = "8";
            this.button8.UseVisualStyleBackColor = false;
            this.button8.Click += new System.EventHandler(this.Show_Num);
            this.button8.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button9
            // 
            this.button9.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button9.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button9.Location = new System.Drawing.Point(106, 211);
            this.button9.Name = "button9";
            this.button9.Size = new System.Drawing.Size(41, 39);
            this.button9.TabIndex = 8;
            this.button9.Text = "9";
            this.button9.UseVisualStyleBackColor = false;
            this.button9.Click += new System.EventHandler(this.Show_Num);
            this.button9.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_0
            // 
            this.button_0.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button_0.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_0.Location = new System.Drawing.Point(12, 348);
            this.button_0.Name = "button_0";
            this.button_0.Size = new System.Drawing.Size(88, 39);
            this.button_0.TabIndex = 9;
            this.button_0.Text = "0";
            this.button_0.UseVisualStyleBackColor = false;
            this.button_0.Click += new System.EventHandler(this.Show_Num);
            this.button_0.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_point
            // 
            this.button_point.BackColor = System.Drawing.SystemColors.ControlDark;
            this.button_point.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_point.Location = new System.Drawing.Point(106, 348);
            this.button_point.Name = "button_point";
            this.button_point.Size = new System.Drawing.Size(41, 39);
            this.button_point.TabIndex = 10;
            this.button_point.Text = ",";
            this.button_point.UseVisualStyleBackColor = false;
            this.button_point.Click += new System.EventHandler(this.UnaryOperation);
            this.button_point.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_res
            // 
            this.button_res.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_res.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_res.ForeColor = System.Drawing.Color.Black;
            this.button_res.Location = new System.Drawing.Point(200, 301);
            this.button_res.Name = "button_res";
            this.button_res.Size = new System.Drawing.Size(41, 86);
            this.button_res.TabIndex = 11;
            this.button_res.Text = "=";
            this.button_res.UseVisualStyleBackColor = false;
            this.button_res.Click += new System.EventHandler(this.button_res_Click);
            this.button_res.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_sum
            // 
            this.button_sum.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_sum.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_sum.Location = new System.Drawing.Point(200, 258);
            this.button_sum.Name = "button_sum";
            this.button_sum.Size = new System.Drawing.Size(41, 39);
            this.button_sum.TabIndex = 12;
            this.button_sum.Text = "+";
            this.button_sum.UseVisualStyleBackColor = false;
            this.button_sum.Click += new System.EventHandler(this.BinaryOperation);
            this.button_sum.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_sub
            // 
            this.button_sub.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_sub.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_sub.Location = new System.Drawing.Point(200, 213);
            this.button_sub.Name = "button_sub";
            this.button_sub.Size = new System.Drawing.Size(41, 39);
            this.button_sub.TabIndex = 13;
            this.button_sub.Text = "-";
            this.button_sub.UseVisualStyleBackColor = false;
            this.button_sub.Click += new System.EventHandler(this.BinaryOperation);
            this.button_sub.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_mul
            // 
            this.button_mul.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_mul.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_mul.Location = new System.Drawing.Point(200, 168);
            this.button_mul.Name = "button_mul";
            this.button_mul.Size = new System.Drawing.Size(41, 39);
            this.button_mul.TabIndex = 14;
            this.button_mul.Text = "*";
            this.button_mul.UseVisualStyleBackColor = false;
            this.button_mul.Click += new System.EventHandler(this.BinaryOperation);
            this.button_mul.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_div
            // 
            this.button_div.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_div.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_div.Location = new System.Drawing.Point(200, 123);
            this.button_div.Name = "button_div";
            this.button_div.Size = new System.Drawing.Size(41, 39);
            this.button_div.TabIndex = 15;
            this.button_div.Text = "/";
            this.button_div.UseVisualStyleBackColor = false;
            this.button_div.Click += new System.EventHandler(this.BinaryOperation);
            this.button_div.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_step
            // 
            this.button_step.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_step.Location = new System.Drawing.Point(106, 166);
            this.button_step.Name = "button_step";
            this.button_step.Size = new System.Drawing.Size(41, 39);
            this.button_step.TabIndex = 16;
            this.button_step.Text = "^";
            this.button_step.UseVisualStyleBackColor = true;
            this.button_step.Click += new System.EventHandler(this.BinaryOperation);
            this.button_step.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_signal
            // 
            this.button_signal.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_signal.Location = new System.Drawing.Point(59, 166);
            this.button_signal.Name = "button_signal";
            this.button_signal.Size = new System.Drawing.Size(41, 39);
            this.button_signal.TabIndex = 17;
            this.button_signal.Text = "±";
            this.button_signal.UseVisualStyleBackColor = true;
            this.button_signal.Click += new System.EventHandler(this.UnaryOperation);
            // 
            // button_clear
            // 
            this.button_clear.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_clear.Location = new System.Drawing.Point(12, 167);
            this.button_clear.Name = "button_clear";
            this.button_clear.Size = new System.Drawing.Size(41, 39);
            this.button_clear.TabIndex = 18;
            this.button_clear.Text = "AC";
            this.button_clear.UseVisualStyleBackColor = true;
            this.button_clear.Click += new System.EventHandler(this.button_clear_Click);
            this.button_clear.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Key_Down);
            // 
            // button_sin
            // 
            this.button_sin.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_sin.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_sin.Location = new System.Drawing.Point(12, 121);
            this.button_sin.Name = "button_sin";
            this.button_sin.Size = new System.Drawing.Size(88, 39);
            this.button_sin.TabIndex = 19;
            this.button_sin.Text = "sin";
            this.button_sin.UseVisualStyleBackColor = false;
            this.button_sin.Click += new System.EventHandler(this.TrigOperation);
            // 
            // button_cos
            // 
            this.button_cos.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_cos.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_cos.Location = new System.Drawing.Point(106, 123);
            this.button_cos.Name = "button_cos";
            this.button_cos.Size = new System.Drawing.Size(88, 39);
            this.button_cos.TabIndex = 20;
            this.button_cos.Text = "cos";
            this.button_cos.UseVisualStyleBackColor = false;
            this.button_cos.Click += new System.EventHandler(this.TrigOperation);
            // 
            // button_tg
            // 
            this.button_tg.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_tg.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_tg.Location = new System.Drawing.Point(153, 168);
            this.button_tg.Name = "button_tg";
            this.button_tg.Size = new System.Drawing.Size(41, 39);
            this.button_tg.TabIndex = 21;
            this.button_tg.Text = "tg";
            this.button_tg.UseVisualStyleBackColor = false;
            this.button_tg.Click += new System.EventHandler(this.TrigOperation);
            // 
            // button_ln
            // 
            this.button_ln.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_ln.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_ln.Location = new System.Drawing.Point(153, 213);
            this.button_ln.Name = "button_ln";
            this.button_ln.Size = new System.Drawing.Size(41, 39);
            this.button_ln.TabIndex = 22;
            this.button_ln.Text = "ln";
            this.button_ln.UseVisualStyleBackColor = false;
            this.button_ln.Click += new System.EventHandler(this.TrigOperation);
            // 
            // button_e
            // 
            this.button_e.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_e.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_e.Location = new System.Drawing.Point(153, 348);
            this.button_e.Name = "button_e";
            this.button_e.Size = new System.Drawing.Size(41, 39);
            this.button_e.TabIndex = 23;
            this.button_e.Text = "e";
            this.button_e.UseVisualStyleBackColor = false;
            this.button_e.Click += new System.EventHandler(this.Math_const);
            // 
            // button_pi
            // 
            this.button_pi.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_pi.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_pi.Location = new System.Drawing.Point(153, 303);
            this.button_pi.Name = "button_pi";
            this.button_pi.Size = new System.Drawing.Size(41, 39);
            this.button_pi.TabIndex = 24;
            this.button_pi.Text = "pi";
            this.button_pi.UseVisualStyleBackColor = false;
            this.button_pi.Click += new System.EventHandler(this.Math_const);
            // 
            // button_fac
            // 
            this.button_fac.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_fac.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_fac.Location = new System.Drawing.Point(153, 258);
            this.button_fac.Name = "button_fac";
            this.button_fac.Size = new System.Drawing.Size(41, 39);
            this.button_fac.TabIndex = 25;
            this.button_fac.Text = "!";
            this.button_fac.UseVisualStyleBackColor = false;
            this.button_fac.Click += new System.EventHandler(this.TrigOperation);
            // 
            // label_res
            // 
            this.label_res.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label_res.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_res.Location = new System.Drawing.Point(15, 38);
            this.label_res.Name = "label_res";
            this.label_res.Size = new System.Drawing.Size(229, 33);
            this.label_res.TabIndex = 19;
            this.label_res.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            // 
            // label_action
            // 
            this.label_action.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label_action.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_action.Location = new System.Drawing.Point(15, 9);
            this.label_action.Name = "label_action";
            this.label_action.Size = new System.Drawing.Size(229, 29);
            this.label_action.TabIndex = 19;
            this.label_action.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            // 
            // button_convertToRad
            // 
            this.button_convertToRad.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_convertToRad.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_convertToRad.Location = new System.Drawing.Point(12, 84);
            this.button_convertToRad.Name = "button_convertToRad";
            this.button_convertToRad.Size = new System.Drawing.Size(229, 33);
            this.button_convertToRad.TabIndex = 26;
            this.button_convertToRad.Text = "Перевести в град.";
            this.button_convertToRad.UseVisualStyleBackColor = false;
            this.button_convertToRad.Click += new System.EventHandler(this.button_convertToGrad_Click);
            // 
            // button_history
            // 
            this.button_history.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.button_history.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_history.Location = new System.Drawing.Point(12, 393);
            this.button_history.Name = "button_history";
            this.button_history.Size = new System.Drawing.Size(229, 33);
            this.button_history.TabIndex = 27;
            this.button_history.Text = "История";
            this.button_history.UseVisualStyleBackColor = false;
            this.button_history.Click += new System.EventHandler(this.button_history_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.ClientSize = new System.Drawing.Size(256, 427);
            this.Controls.Add(this.button_history);
            this.Controls.Add(this.button_convertToRad);
            this.Controls.Add(this.label_action);
            this.Controls.Add(this.label_res);
            this.Controls.Add(this.button_fac);
            this.Controls.Add(this.button_pi);
            this.Controls.Add(this.button_e);
            this.Controls.Add(this.button_ln);
            this.Controls.Add(this.button_tg);
            this.Controls.Add(this.button_cos);
            this.Controls.Add(this.button_sin);
            this.Controls.Add(this.button_clear);
            this.Controls.Add(this.button_signal);
            this.Controls.Add(this.button_step);
            this.Controls.Add(this.button_div);
            this.Controls.Add(this.button_mul);
            this.Controls.Add(this.button_sub);
            this.Controls.Add(this.button_sum);
            this.Controls.Add(this.button_res);
            this.Controls.Add(this.button_point);
            this.Controls.Add(this.button_0);
            this.Controls.Add(this.button9);
            this.Controls.Add(this.button8);
            this.Controls.Add(this.button7);
            this.Controls.Add(this.button6);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.Text = "Калькулятор";
            this.Load += new System.EventHandler(this.Load_);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button8;
        private System.Windows.Forms.Button button9;
        private System.Windows.Forms.Button button_0;
        private System.Windows.Forms.Button button_point;
        private System.Windows.Forms.Button button_res;
        private System.Windows.Forms.Button button_sum;
        private System.Windows.Forms.Button button_sub;
        private System.Windows.Forms.Button button_mul;
        private System.Windows.Forms.Button button_div;
        private System.Windows.Forms.Button button_step;
        private System.Windows.Forms.Button button_signal;
        private System.Windows.Forms.Button button_clear;
        private System.Windows.Forms.Button button_sin;
        private System.Windows.Forms.Button button_cos;
        private System.Windows.Forms.Button button_tg;
        private System.Windows.Forms.Button button_ln;
        private System.Windows.Forms.Button button_e;
        private System.Windows.Forms.Button button_pi;
        private System.Windows.Forms.Button button_fac;
        private System.Windows.Forms.Label label_res;
        private System.Windows.Forms.Label label_action;
        private System.Windows.Forms.Button button_convertToRad;
        private System.Windows.Forms.Button button_history;
    }
}

