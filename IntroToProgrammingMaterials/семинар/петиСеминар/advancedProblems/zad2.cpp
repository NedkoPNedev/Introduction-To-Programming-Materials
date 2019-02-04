#include <iostream>
#include <math.h>

using namespace std;

bool isTriangle(int a, int b, int c)
{
    return a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a;
}

double getArea(int a, int b, int c)
{
    if (isTriangle(a, b, c))
    {
        double perimeter = a + b + c;
        double p = perimeter / 2.0;
        return sqrt(p*(p - a)*(p - b)*(p - c));
    }
    return -1.0;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << getArea(a, b, c) << endl;
}
