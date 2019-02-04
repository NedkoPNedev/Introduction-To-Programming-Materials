#include <iostream>
using namespace std;

int main()
{
    int todY = 2015, todM = 10, todD = 14;
	int BY, BM, BD;
	cin >> BD >> BM >> BY;
	int diff = (todY - BY) - (todM < BM) - ((todM == BM)*(todD < BD));
	return 0;
}