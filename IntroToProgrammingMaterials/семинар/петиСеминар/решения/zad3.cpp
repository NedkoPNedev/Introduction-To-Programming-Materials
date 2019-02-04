#include <iostream>

using namespace std;

int main()
{
    int n;
    double currNum, sum = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> currNum;
            if (i > j)
            {
                sum += currNum;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
/*
4
7 3 6 1
9.1 8 5 2
1.2 2.3 3 3
7.4 8.5 9.6 1
*/
