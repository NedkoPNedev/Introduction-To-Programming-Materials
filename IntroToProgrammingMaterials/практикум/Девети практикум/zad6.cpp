// Pr,6.cpp : 6.	Въвежда се матрица nxn съдържаща думи с максимална дължина 9, Да се напише програма, която проверява дали изречението получено от конкатенацията на елементите по главния диагонал(от горен ляв ъгъл) е равна на конкатенацията от ел. по вторичния диагонал(от долен ляв ъгъл).
//

#include "iostream"
using namespace std;

int main()
{
	char la[20][20][10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> la[i][j];
		}
	}
	char str1[20 * 9 + 1] = "", str2[20 * 9 + 1] = "";
	for (int i = 0; i < n; i++)
	{
		strcat(str1, la[i][i]);
		strcat(str2, la[n - 1 - i][i]);
	}
	(!(str1 == str1)) ? cout << "Oui\n" : cout << "Non\n";
	return 0;
}

