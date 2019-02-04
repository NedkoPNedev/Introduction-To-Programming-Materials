#include <iostream>

using namespace std;

int digSum(int n)
{
    if (n == 0) return 0;
    return n % 10 + digSum(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << digSum(n) << endl;
    return 0;
}
