#include <iostream>

using namespace std;

int main()
{
    int n, number, product = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> number;
        if (i % 2 == 0)
        {
            product = product * number;
        }
    }
    cout << product << endl;
    return 0;
}
