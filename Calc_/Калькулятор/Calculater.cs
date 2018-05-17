using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Калькулятор
{
    class Calculater
    {
        double first_num, second_num, result_num;
        string operation;

        public Calculater()
        {
            first_num = 0;
            second_num = 0;
            result_num = 0;
            operation = "";
        }

        public double Result(string res)
        {
            double result;
            if (res.Contains("^"))
                operation = "^";
            else if (res.Contains("+"))
                operation = "+";
            else if (res.Contains("one_operator"))
                operation = "one_operator";
            else if (res.Contains("*"))
                operation = "*";
            else if (res.Contains("/"))
                operation = "/";
            else
                operation = "-";

            if (operation != "one_operator")
            {
                first_num = Convert.ToDouble(res.Substring(0, res.IndexOf(operation)));
                second_num = Convert.ToDouble(res.Substring(res.IndexOf(operation) + 1));
                result = Actions(first_num, second_num, operation);
            }
            else
            {
                operation = res.Substring(res.IndexOf(operation) + 12);
                first_num = Convert.ToDouble(res.Substring(0, res.IndexOf(operation) - 12));
                result = Actions_trig(first_num, operation);
            }


            return result;
        }

        public double Actions_trig(double first_n, string operat)//Действия
        {
            switch (operat)
            {
                case "sin":
                    result_num = Math.Sin(first_n);
                    break;

                case "cos":
                    result_num = Math.Cos(first_n);
                    break;

                case "tg":
                    result_num = Math.Tan(first_n);
                    break;

                case "!":
                    result_num = Fact(first_n);
                    break;

                case "ln":
                    result_num = Math.Log(first_n);
                    break;
            }
            return result_num;
        }

        public double Fact(double n)
        {
            int temp = (int)n;
            if (n != temp)
            {
                return Math.Exp(Math.Log(Fact(temp)) + (n - temp) * Math.Log(temp + 1));
            }
            else {
                if (n < 0) return 0;
                if (n == 0) return 1;
                else return n * Fact(n - 1);
            }
        }

            public double Actions(double first_n, double second_n, string operat)//Действия
        {
            switch (operat)
            {
                case "*":
                    result_num = first_n * second_n;
                    break;

                case "+":
                    result_num = first_n + second_n;
                    break;

                case "-":
                    result_num = first_n - second_n;
                    break;

                case "/":
                    if (second_n != 0)
                        result_num = first_n / second_n;
                    else
                        throw new DivideByZeroException();//исключение, которое возникает при делении на 0
                    break;

                case "^":
                    result_num = Math.Pow(first_n, second_n);
                    break;
            }
            return  result_num;
        }
    }
}
