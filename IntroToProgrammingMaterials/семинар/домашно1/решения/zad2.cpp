//Програма, която намира стойността а израза sqrt(1 + sqrt(3 + sqrt(5 + ....sqrt(n-2 + sqrt(n))))) , n e нечетно
//5 -> 1,81335
//33 -> 1,85025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << setw(n - i) << '/';

        for (int j = 0; j < 2 * i; j++)
        cout << ' ';

        cout << '\\' << endl;
    }
    for (int i = 0; i < 2 * n; i++)
    cout << '-';
    cout << endl;

    for (int i = 0; i < n; i++)
    cout << '|' << setw(2 * n - 1) << '|' << endl; //2 * (n - 1) + 1 = 2 * n - 1

    for (int i = 0; i < 2 * n; i++)
    cout << '=';
    cout << endl;

	return 0;
}
