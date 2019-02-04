#include <iostream>

using namespace std;

int main()
{
    int n, x, product = 1;
    cin >> x >> n;
    while (n > 0)
    {
        product *= x;
        n--;
    }
    cout << product << endl;
    return 0;
}
