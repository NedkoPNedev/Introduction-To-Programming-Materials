#include <iostream>

using namespace std;

const int SIZE = 100;

void countWays(bool arr[][SIZE], int row, int col, int n, int &counter)
{
    if (row < 0 || col < 0 || row >= n || col >= n || arr[row][col] == 0) return;
    if (row == n - 1 && col == n - 1) { counter++; return; }
    arr[row][col] = 0;
    countWays(arr, row + 1, col, n, counter);
    countWays(arr, row - 1, col, n, counter);
    countWays(arr, row, col - 1, n, counter);
    countWays(arr, row, col + 1, n, counter);
    arr[row][col] = 1;
}

int getCount(bool arr[][SIZE], int n)
{
    int cnt = 0;
    countWays(arr, 0, 0, n, cnt);
    return cnt;
}

int main()
{
    int n;
    bool arr[SIZE][SIZE];
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << getCount(arr, n) << endl;
    return 0;
}
