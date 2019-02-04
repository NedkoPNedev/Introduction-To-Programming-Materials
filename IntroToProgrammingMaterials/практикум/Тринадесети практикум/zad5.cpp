#include <iostream>
using namespace std;
int sumDigits(int num)
{
    if(num <= 9)
        return num;
    return num % 10 + sumDigits(num / 10);
}

int main()
{
    cout << sumDigits(1234) << endl;
}
