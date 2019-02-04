#include <iostream>

using namespace std;

bool isPalindrome(int n)
{
    int temp = n, reversed = 0;
    while (temp > 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return n == reversed;
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl;
    return 0;
}
