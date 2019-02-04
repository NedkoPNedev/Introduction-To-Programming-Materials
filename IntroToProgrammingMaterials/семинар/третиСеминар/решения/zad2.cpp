#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c)
    {
        cout << "The smallest number is : " << a << endl;
    }
    else if (b <= a && b <= c)
    {
        cout << "The smallest number is : " << b << endl;
    }
    else
    {
        cout << "The smallest number is : " << c << endl;
    }
    return 0;
}
