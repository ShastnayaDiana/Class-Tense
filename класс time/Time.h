//K���� Time ������������ ��� �������� ����� � ����, ���� � ������� � �.�., ��� �������� ����� ���� �����, 
//������� ������� ����� ����� ������������ ���������� ������� � �������, � ������ ������ ��� 
//������������� �������� ��������, ����� � ������� ����� ������, �� ����� ���������� ����� ����� 
//���� ��������� �����:�����:������ �����, ������������� �������� ���������. ������ ����� ����� 
//����������� � 3 �����������, ���� �� ������� ����� ���� ���������� �� ���������, �������� - �������, 
//������ ��������� � ����������� �������, � ����� ���� ����� timeToStr(), ������� ������������ ����� � 
//������ � ������������ ����� � ������� 24:08:56, ��� ������������� ������� ��� 
//����� ������������� ���, �� ���� �������, ������ ������ 60 �� ������ ����, ��� ��� ��������� � ������, 
//���� �������������, ��� ����������� � ������ set_time(int h, int m, int s).
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

