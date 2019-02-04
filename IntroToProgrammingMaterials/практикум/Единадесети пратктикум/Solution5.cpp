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
int simpleMultipliers(int num)
{
    cout << num << endl;
    if(isPrime(num) || num == 1)
        return num;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(isPrime(i) && num % i == 0)
        {
            //cout << i << " ";
            return simpleMultipliers(num / i);
        }
    }
}
int main()
{
    //cout << isPrime(7) << endl;
    //cout << isPrime(12) << endl;
    cout << simpleMultipliers(18) << endl;
}
