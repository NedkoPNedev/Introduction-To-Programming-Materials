#include <iostream>

using namespace std;

void getPrimeMultipliers(int n)
{
    int k = 2;
    while (n != 1)
    {
        if (n % k == 0)
        {
            cout << k << " ";
            n = n / k;
        }
        else k++;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    getPrimeMultipliers(n);
    return 0;
}
