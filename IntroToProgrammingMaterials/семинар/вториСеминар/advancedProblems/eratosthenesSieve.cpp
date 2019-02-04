/// PRINTS ALL PRIME NUMBERS UP TO 1000
#include <iostream>
#include <math.h>

using namespace std;

const int MAX_SIZE = 1000;

int main()
{
    int currNum;
    bool prime[MAX_SIZE + 1];
    for (int i = 2; i <= MAX_SIZE; i++) prime[i] = 1;
    for (int i = 2; i <= MAX_SIZE; i++)  /// optimization bound - sqrt(MAX_SIZE)
    {
        if (prime[i])
        {
            currNum = i * 2;   /// optimization i * i instead of i * 2;
            while (currNum <= MAX_SIZE)
            {
                prime[currNum] = false;
                currNum += i;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i <= MAX_SIZE; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl;
    cout << "The number of all primes up to " << MAX_SIZE << " is : " << cnt << endl;
}
