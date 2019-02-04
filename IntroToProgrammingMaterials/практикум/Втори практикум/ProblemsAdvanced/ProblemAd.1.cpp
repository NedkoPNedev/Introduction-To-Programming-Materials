// ErasthenesSieve.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;

int main()
{
	int arr[4000] = { 0 }, n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num = 2 + i;
		int add = num;
		int count = 0;

		while (num <= n)
		{
			if (num % add == 0 && count > 0)
			{
				arr[num - 2] = -1;
			}
			else
			{
				if (arr[num - 2] != -1)
				{
					arr[num - 2] = 1;
				}
			}
			count++;
			num += add;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
