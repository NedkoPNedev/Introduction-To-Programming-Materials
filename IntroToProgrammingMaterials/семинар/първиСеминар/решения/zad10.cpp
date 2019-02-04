#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
	cin>>x;
	cout<<((x != 0) && !(x & (x - 1)));
	return 0;
}