#include <iostream>

using namespace std;

int main()
{
    int n, mult;
    cin >> n;
    mult = n * n;
    for (int i = 1; i <= mult; i++)
    {
        cout << i << " ";
        if (i % n == 0) cout << "\n";
    }
}
