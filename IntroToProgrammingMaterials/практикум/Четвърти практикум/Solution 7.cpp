//Програма, която при въведено число, да го изведе разложено на прости делители

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool first = true;
	int i = 2;
	cout << n << " = ";
	while (i < n)
	{
		if (n%i == 0)
		{
			if (!first) cout << ".";
			cout << i;
			first = false;
			n /= i;
			//if(n == 1) break;
		}
		else i++;
	}
	if (first) cout << n << endl;
	else
		if (n != 1) cout << "." << n << endl;
	return 0;
}
