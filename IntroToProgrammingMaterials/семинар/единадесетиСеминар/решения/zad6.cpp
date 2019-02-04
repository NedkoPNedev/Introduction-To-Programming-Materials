#include <iostream>
using namespace std;

int reverseNum(int n, int sum)
{
    if (n == 0) return sum;
    return reverseNum(n / 10, sum * 10 + n % 10);
}

int main()
{
    int n;
    cin >> n;
    cout << reverseNum(n, 0) << " " << reverseNum_2(n) << endl;
}
