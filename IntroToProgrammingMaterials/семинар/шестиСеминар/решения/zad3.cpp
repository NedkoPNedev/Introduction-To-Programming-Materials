#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

void getFirstPairPrimes(int from, int to)
{
    if (from % 2 == 0) from++;  /// Aко е четно да започва от следващото
    for (int i = from; i <= to - 2; i += 2)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            cout << i << " " << i + 2 << endl;
            break;
        }
    }
}

int main()
{
    int from, to;
    cin >> from >> to;
    getFirstPairPrimes(from, to);
    return 0;
}
