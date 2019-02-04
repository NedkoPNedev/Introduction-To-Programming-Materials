// Програма, която намира симетричното на дадено число и проверява дали въведеното число е палиндром

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int symNumber = 0, tmp = n;
	while (tmp)
	{
		symNumber = symNumber * 10 + tmp % 10;
		tmp /= 10;
	}
	cout << "The symmetrical number of " << n << " is " << symNumber << endl;
	symNumber == n ? cout << "The number is a palindrome\n" : cout << "The number isn't a palindrome\n";
	return 0;
}
