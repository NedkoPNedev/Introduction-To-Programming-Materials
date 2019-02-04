#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1, c;
    cin >> n;
    if (n == 0) cout << a << endl;
    else if (n == 1) cout << b << endl;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }
    return 0;
}
