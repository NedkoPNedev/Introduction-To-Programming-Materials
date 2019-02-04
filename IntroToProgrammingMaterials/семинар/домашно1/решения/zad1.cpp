#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if (y >= 0.0) /// над абсцисната ос
    {
        if (x * x + y * y <= 16.0) /// вътре в най-големия кръг
        {
            if ((x - 2) * (x - 2) + y * y >= 4.0 && (x + 2) * (x + 2) + y * y >= 1.0) /// извън полукръговете в първи и втори квадрант
            {
                cout << "Point (" << x << "," << y << ")" << " is inside \n";
            }
            else
            {
                cout << "Point (" << x << "," << y << ")" << " is outside \n";
            }
        }
        else
        {
                cout << "Point (" << x << "," << y << ")" << " is outside \n";
        }
    }
    else  /// под абсцисната ос
    {
        if ((x + 2) * (x + 2) + y * y <= 4.0) /// вътре в най-големия кръг под абсцисната ос
        {
            if ((x + 2) * (x + 2) + y * y >= 1.0) /// извън най-малкия кръг под абсцисната ос
            {
                cout << "Point (" << x << "," << y << ")" << " is inside \n";
            }
            else
            {
                cout << "Point (" << x << "," << y << ")" << " is outside \n";
            }
        }
        else
        {
            cout << "Point (" << x << "," << y << ")" << " is outside \n";
        }
    }
}
