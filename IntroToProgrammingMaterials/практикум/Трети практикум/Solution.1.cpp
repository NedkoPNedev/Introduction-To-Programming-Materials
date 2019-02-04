#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	if (x * x + y * y <= 1)
	{
		if (x <= y && x >= 0 && y >= 0) //First quadrant
		{
			cout << "Inside\n";
		}
		else if (-x <= y && x <= 0 && y >= 0) //Second quadrant
		{
			cout << "Inside\n";
		}
		else if (-x <= -y && x <= 0 && y <= 0) //Third quadrant
		{
			cout << "Inside\n";
		}
		else if (x <= -y && x >= 0 && y <= 0) //Fourth quadrant
		{
			cout << "Inside\n";
		}
	}
	else
	{
		cout << "Not inside\n";
	}
	return 0;
}