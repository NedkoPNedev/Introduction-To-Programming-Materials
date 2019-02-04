#include <iostream>
using namespace std;

int main()
{
    int year, month, day;
	cout << "Year: ";
	cin >> year;
	while (true)
	{
		cout << "Month: ";
		cin >> month;
		if (!cin || month < 1 || month>12)
		{
			cout << "Error\n";
		}
		else break;
	}
	int maxDays;
	if ((month <= 7 && month % 2 == 1) || (month >= 8 && month % 2 == 1))
	{
		maxDays = 31;
	}
	else if (month == 2)
	{
		maxDays = (year % 400 == 0) ? 29 : (year % 100 == 0) ? 28 : (year % 4 == 0) ? 29 : 28;
		//maxDays= 28+((year%400==0)||(year%100==0 && year%4==0))
	}
	else
	{
		maxDays = 30;
	}
	while (true)
	{
		cout << "Day: ";
		cin >> day;
		if (!cin || day<1 || day>maxDays)
		{
			cout << "Error\n";
		}
		else break;
	}
	cout << "Valid date: " << day << "." << month << "." << year << endl;
	return 0;
}