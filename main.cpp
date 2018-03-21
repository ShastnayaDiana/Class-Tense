#include "Time.h"
#include <iostream>

int main()
{
	Time time(0, 59);
	Time tense(1, 1, 0);

	time = time + tense;
	cout << "Time + Time_1 = " << time.timeToStr() << endl;
	tense = tense - time;
	cout << "Time - Time_1 = " << tense.timeToStr() << endl;
	cout << " Seconds in year: " << time.HourToSec(24) * 365 << endl;
	cout << "Editing hours in minutes: " << time.HourToMin(time.houres()) << endl;
	cout << "Editing hours in seconds: " << time.HourToSec(time.houres()) << endl;
	cout << "Editing minutes in seconds: " << time.MinToSec(time.minutees()) << endl;
	cout << "Editing minutes in hours: " << time.MinToHour(time.minutees()) << endl;
	cout << "Editing seconds in minutes: " << time.SecToMin(time.secondes()) << endl;
	cout << "Editing secomds in hours: " << time.SecToHour(time.secondes()) << endl;

	system("pause");
	return 0;
}
