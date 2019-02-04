#include <iostream>
#include <cmath>
using namespace std;
bool isTriangle(int a, int b, int c)
{
    if(a + b > c && a + c >  b && b + c > a)
        return true;
    return false;
}
double areaOfTriangle(int a, int b, int c)
{
    if(!isTriangle(a, b, c))
        return -1;
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    int a = 3, b = 4, c = 5;
    cout << areaOfTriangle(a, b, c) << endl;
}
