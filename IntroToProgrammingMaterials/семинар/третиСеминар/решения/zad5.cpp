#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a - b < c && a - c < b && b - c < a)
        {
            cout << "Triangle can be formed \n";
        }
        else
        {
            cout << "Triangle can not be formed \n";
        }
    }
    else
    {
        cout << "Triangle can not be formed \n";
    }
    return 0;
}
