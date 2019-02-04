#include <iostream>
using namespace std;

int main()
{
	int arr[50][50] = { 0 }, n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int count = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int c = 0, s = 0;
			for (int di = i - 1; di < i + 2; di++)
			{
				for (int dj = j - 1; dj < j + 2; dj++)
				{
					if (di < 0 || di >= n || dj < 0 || dj >= m)
					{
						continue;
					}
					c++;
					s += arr[di][dj];
				}
			}
			if (c*arr[i][j] == s)
			{
				cout << i << j;
			}
		}
	}
	return 0;
}