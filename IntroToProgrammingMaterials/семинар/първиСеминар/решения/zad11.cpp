#include <iostream>
using namespace std;

int main()
{
    int todY = 2018, todM = 10, todD = 7;
	int BY, BM, BD;
	cin >> BD >> BM >> BY;
	int age = (todY - BY) - (todM < BM) - ((todM == BM)&&(todD < BD));
	cout << age << endl;
	return 0;
}
