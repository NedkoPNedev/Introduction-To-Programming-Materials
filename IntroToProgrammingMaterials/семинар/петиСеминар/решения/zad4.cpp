#include <iostream>

using namespace std;

int main()
{
    int n, currNum, cnt = 0;
    bool isPrime;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> currNum;
            if (j <= n - i - 1 && currNum >= 2)
            {
                isPrime = true;
                for (int k = 2; k * k <= currNum; k++)
                {
                    if (currNum % k == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
/*
3
1 2 3
4 5 6
7 8 9

*/

