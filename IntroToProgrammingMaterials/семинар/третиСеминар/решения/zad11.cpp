//Програма, която намира стойността а израза sqrt(1 + sqrt(3 + sqrt(5 + ....sqrt(n-2 + sqrt(n))))) , n e нечетно
//5 -> 1,81335
//33 -> 1,85025

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	do
	{
		cin >> n;
	} while (n % 2 == 0);
	double res = sqrt(n);
	for (int i = n - 2; i >= 1; i -= 2)
	{
		res = sqrt(i + res);
	}
	cout << "Result = " << res << endl;
	return 0;
}
