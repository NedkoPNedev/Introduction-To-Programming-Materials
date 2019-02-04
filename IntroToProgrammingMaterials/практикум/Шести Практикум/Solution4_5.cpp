#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int cpy = num, sum = 0;
    while(cpy)
    {
        sum = sum * 10 + cpy % 10;
        cpy /= 10;
    }
    if(sum == num)
        return true;
    return false;
}
int palindromesInInterval(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        if(isPalindrome(i))
            cout << i << " ";
    }
}
int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(122) << endl;
    cout << palindromesInInterval(100, 200) << endl;
}
