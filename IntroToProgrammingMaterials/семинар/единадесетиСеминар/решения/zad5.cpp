#include <iostream>

using namespace std;

int minDig(int n)
{
    if (n < 10) return n;
    int minRest = minDig(n / 10);
    if (n % 10 <= minRest) return n % 10;
    return minRest;
}

int main()
{
    int n;
    cin >> n;
    cout << minDig(n) << endl;
    return 0;
}
