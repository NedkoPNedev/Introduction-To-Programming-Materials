// Pr.2.cpp : 2.	2.	Да се напише програма, която умножава матриците Anxm Bmxk (1<=n<=20, 1<=m<=30, 1<=k<=40) и записва резултатът в матрица Cnxk .
#include "iostream"
using namespace std;

int main()
{
	int arrA[50][50] = { 0 }, arrB[50][50] = { 0 }, n, m, k;
	int arrC[50][50] = { 0 };
	cin >> n >> m >> k;//
	for (int t = 0; t < n; t++)
	{
		for (int l = 0; l < m; l++)
		{
			arrA[t][l] = t + l + 1;
		}
	}
	for (int v = 0; v < m; v++)
	{
		for (int l = 0; l < k; l++)
		{
			arrB[v][l] = v + l + 1;
		}
	}
	int  mij = 0, kj = 0, ni = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			for (int b = 0; b < m; b++)
			{
				arrC[i][j] += arrA[i][b] * arrB[b][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			cout << arrC[i][j] << " ";
		cout << endl;
	}
	return 0;
}

