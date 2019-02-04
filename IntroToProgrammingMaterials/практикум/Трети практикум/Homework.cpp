#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y;
	cout << "Please enter the x coordinate: ";
	cin >> x;
	cout << "Please enter the y coordinate: ";
	cin >> y;
	if ((pow(x, 2) + pow(y, 2) <= 16) && (pow((x + 2), 2) + pow(y, 2) >= 1) && (pow((x - 2), 2) + pow(y, 2) > 4))
	{
		if ((x >= -4 && x <= 4) && (y >= -2 && y <= 4))
		{
			// Or just one if as proposed ((((pow(x, 2) + pow(y, 2) <= 16) && y >= 0) || ((pow((x + 2), 2) + pow(y, 2) <= 4) && y <= 0))
			// && (pow((x + 2), 2) + pow(y, 2) > 1) && (pow((x - 2), 2) + pow(y, 2) > 4))
			cout << "Yes the point (" << x << "," << y << ") belongs to the shaded figure :)\n";
		}
		else
		{
			cout << "No the point (" << x << "," << y << ") does not belong to the shaded figure :(\n";
		}
	}
	else
	{
		cout << "No the point (" << x << "," << y << ") does not belong to the shaded figure :(\n";
	}
	return 0;
}
