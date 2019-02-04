#include <iostream>
using namespace std;

int main()
{
	char inCons[50];
	cin.getline(inCons, 50, '.');
	int len = strlen(inCons);
	for (int i = len-1; i >=0; i--)
	{
		cout << inCons[i];
	}
	cout << endl;

	return 0;
}