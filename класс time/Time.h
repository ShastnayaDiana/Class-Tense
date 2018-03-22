//Kласс Time предназначен для перевода минут в часы, часы в секунды и т.д., для человека может быть важно, 
//сколько времени будет через определенный промежуток времени в будущем, в данном классе это 
//перегруженный оператор сложения, также с помощью этого класса, он может определить какое время 
//было несколько часов:минут:секунд назад, перегруженный оператор вычитания. Данный класс имеет 
//конструктор с 3 параметрами, один из которых может быть параметром по умолчанию, параметр - секунды, 
//методы установки и возвращение времени, а также есть метод timeToStr(), который конвертирует время в 
//строку и представляет время в формате 24:08:56, для представления времени еще 
//важно преобразовать его, то есть секунды, минуты больше 60 не должны быть, они уже переходят в минуты, 
//часы соответсвенно, это реализовано в методе set_time(int h, int m, int s).
#pragma once
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
class Time
{
	int seconds, minutes, hours;
public:
	Time();
	~Time();
	Time(unsigned h, unsigned m, unsigned s = 0);
	void set_s(unsigned s);
	void set_m(unsigned m);
	void set_h(unsigned h);
	static unsigned SecToHour(unsigned s);
	static unsigned SecToMin(unsigned s);
	static unsigned HourToMin(unsigned h);
	static unsigned HourToSec(unsigned h);
	static unsigned MinToHour(unsigned m);
	static unsigned MinToSec(unsigned m);
	unsigned secondes() const;
	unsigned minutees() const;
	unsigned houres() const;
	void set_time(int h, int m, int s);
	Time operator+ (const Time &time);
	Time operator- (const Time &time);
	string timeToStr();
};

