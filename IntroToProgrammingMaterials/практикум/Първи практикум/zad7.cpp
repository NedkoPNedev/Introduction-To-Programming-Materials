#include <iostream>
using namespace std;

int main()
{
    int year;
	cin >> year;
	bool whatYear400 = (year % 400 == 0), whatYear100 = (year % 100 == 0), whatYear4 = (year % 4 == 0);
	cout << boolalpha << (whatYear400 || (!whatYear100&&whatYear4)) << endl;
	return 0;
}