#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, m, arr[100], arrSec[100];
	int found = 0;
	cin >> n;
	bool la = false;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> arrSec[i];
		if (i + 1 >= n)
		{
			for (int j = 0; j < i; j++)
			{
				if ((arr[j] == arr[j + i - n]) && j <= n)
				{
					la = true;
				}
				else
				{
					la = false;
				}
			}
			if (la)
			{
				found++;
			}
		}

	}
	cout << found << endl;
	return 0;
}

