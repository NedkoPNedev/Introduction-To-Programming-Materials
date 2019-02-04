#include <iostream>

using namespace std;

int main()
{
    int n, arr[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
             cout << arr[j][j - i] << " ";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i - j][n - j - 1] << " ";
        }
        cout << endl;
    }
}
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

13
14 9
15 10 5
16 11 6 1
12 7 2
8 3
4
*/

