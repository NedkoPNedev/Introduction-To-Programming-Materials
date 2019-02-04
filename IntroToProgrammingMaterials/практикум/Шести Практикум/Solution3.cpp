#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if(num <= 1)
        return false;
    if(num == 2)
        return true;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
void twinNumbers(int a, int b)
{
    bool flag = true;
    for(int i = a; i < b; i++)
    {
        if(isPrime(i))
        {
            for(int j = i + 1; j <= b; j++)
            {
                if(isPrime(j) && j - i == 2)
                {
                    cout << i << " " << j;
                    flag = false;
                    break;
                }
            }
        }
        if(!flag)
            break;
    }
}
int main()
{
    twinNumbers(2, 10);
}
