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

void getAllPalinds(int from, int to)
{
    for (int i = from; i <= to; i++)
    {
        if (isPalindrome(i))
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int from, to;
    cin >> from >> to;
    getAllPalinds(from, to);
    return 0;
}
