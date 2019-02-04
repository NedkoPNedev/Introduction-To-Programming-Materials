#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num, int check)
{
    if(check == 1) return true;
    if(num%check == 0) return false;
    return isPrime(num, check-1);
}

bool isItPrime(int num)
{
    return isPrime(num, num-1);
}
int simpleMultipliers(int num)
{
    if(isItPrime(num) || num == 1)
        return num;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(isItPrime(i) && num % i == 0)
        {
            cout << i << " ";
            return simpleMultipliers(num / i);
        }
    }
}
int main()
{
    cout << isItPrime(7) << endl;
    cout << isItPrime(12) << endl;
    cout << simpleMultipliers(28) << endl;
}
