#include "../std_lib_facilities.h"

struct Date
{
	int year, month, day;

	Date(int y, int m, int d);

	void add_day();
};

Date::Date(int y, int m, int d)
{
	if(y > 0)
		year = y;
	else
			error("Helytelen ev");

	if(m <= 12 && m > 0)
		month = m;
	else
			error("Helytelen honap");	

	if(d > 0 && d <= 31)
		day = d;
	else
			error("Helytelen nap");
}

void printDate(Date& date)
{
	cout << "Date: " << date.year << '.' << date.month << '.' << date.day << endl;
}

void Date::add_day()
{
	day++;
	if (day > 31)
	{
		month++;
		day -= 31;
		if(month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try {

	Date today {1978, 6, 25};
	Date tomorrow = today;
	tomorrow.add_day();

	printDate(today);
	printDate(tomorrow);

	return 0;

} catch (exception& e){
	cout << e.what() << endl;
	return 1;
}
