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
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << arr[i - j][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << arr[n + i - 1 - j][j] << " ";
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

1
2 5
3 6 9
4 7 10 13
8 11 14
12 15
16
*/
