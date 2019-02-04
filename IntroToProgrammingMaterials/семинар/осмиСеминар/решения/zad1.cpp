#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char arr[50];
	cin.getline(arr, 49);
	int len = strlen(arr);

	for (int i = len - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	cout << endl;

	return 0;
}
