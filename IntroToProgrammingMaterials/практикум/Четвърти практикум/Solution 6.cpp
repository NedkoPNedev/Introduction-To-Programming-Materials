//Да се напише програма, която по зададено число n>=0, намира fib(n)

#include <iostream>

using namespace std;

int main()
{
	int n;
	do
	{
		cin >> n;
	} while (n < 0);
	int fib;
	int first = 0, second = 1, third = 1;
	if (n == 0) fib = 0;
	else if (n == 1) fib = 1;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			first = second;
			second = third;
			third = first + second;
		}
		fib = first;
	}
	cout << "fib(" << n << ") = " << fib << endl;
	return 0;
}
