#include "Time.h"


Time::Time()
{
	seconds = 0;
	minutes = 0;
	hours = 0;
}


Time::~Time()
{
}

Time::Time(unsigned h, unsigned m, unsigned s)
{
	set_h(h);
	set_m(m);
	set_s(s);
}

void Time::set_s(unsigned s) {
	if (s >= 0) seconds = s;
}

void Time::set_m(unsigned m) {
	if (m >= 0) minutes = m;
}

void Time::set_h(unsigned h) {
	if (h >= 0) hours = h;
}

unsigned Time::SecToHour(unsigned s) {
	if (s >= 3600) return s / 3600;
	else if ((s == 0) || (s < 60)) return 0;
}

unsigned Time::SecToMin(unsigned s) {
	if (s >= 60)
		return s / 60;
	else   if ((s == 0) || (s < 60)) return 0;
}

unsigned Time::HourToMin(unsigned h) {
	if (h >= 0) return h * 60;
}

unsigned Time::HourToSec(unsigned h) {
	if (h >= 0) return h * 3600;
}

unsigned Time::MinToHour(unsigned m) {
	if (m >= 60) return m / 60;
	else return 0;
}

unsigned Time::MinToSec(unsigned m) {
	if (m >= 0) return m * 60;
}

unsigned Time::secondes() const { return seconds; }

unsigned Time::minutees() const { return minutes; }

unsigned Time::houres() const { return hours; }

void Time::set_time(int h, int m, int s) {
	if (s < 0)	s += 60;
	if (m < 0) 	m += 60;
	if (h < 0) 	h += 24;

	if (s >= 60) {
		m += s / 60;
		set_s(s %= 60);
	}
	if (m >= 60) {
		h += m / 60;
		set_h(h);
		set_m(m %= 60);
	}
	set_m(m);
	set_s(s);
	set_h(h);
}

Time Time :: operator+ (const Time &time) {
	Time time1;
	time1.hours = this->hours + time.hours;
	time1.minutes = this->minutes + time.minutes;
	time1.seconds = this->seconds + time.seconds;
	time1.set_time(time1.hours, time1.minutes, time1.seconds);
	return time1;
}

Time Time :: operator- (const Time &time)
{
	Time time1;
	time1.hours = this->hours - time.hours;
	time1.minutes = this->minutes - time.minutes;
	time1.seconds = this->seconds - time.seconds;
	time1.set_time(time1.hours, time1.minutes, time1.seconds);
	return time1;
}

string Time::timeToStr() {
	string str_time, st;
	std::stringstream ss;
	ss << hours;
	ss >> str_time;
	std::stringstream ss_;
	ss_ << minutes;
	ss_ >> st;
	str_time += ":" + st;
	st = "";
	std::stringstream str;
	str << seconds;
	str >> st;
	str_time += ":" + st;
	return str_time;
}
