/// Задача 1
/*#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 20;

int strlen(char *arr)
{
    int cnt = 0;
    while (*arr)
    {
        cnt++;
        arr++;
    }
    return cnt;
}

void print(char *str1, char *str2)
{
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int position1 = -1, position2 = -1;
    for (int i = 0; i < str1Len && position1 == -1; i++)
    {
        for (int j = 0; j < str2Len && position2 == -1; j++)
        {
            if (str1[i] == str2[j])
            {
                position1 = i;
                position2 = j;
            }
        }
    }
    if (position1 == -1)
    {
        cout << "There aren't any equal characters.\n";
        return;
    }
    for (int i = 0; i < position2; i++)
    {
        cout << setw(position1 + 1) << str2[i] << endl;
    }
    cout << str1 << endl;
    for (int i = position2 + 1; i < str2Len; i++)
    {
        cout << setw(position1 + 1) << str2[i] << endl;
    }
}

int main()
{
    char str1[SIZE], str2[SIZE];
    cin >> str1 >> str2;
    print(str1, str2);
    return 0;
}*/
/// Задача 2
/*
#include <iostream>
#include <iostream>

using namespace std;

const int SIZE = 30;

void variations(bool *used, int *arr, int n, int k, int pos)
{
    if (pos == k)
    {
        for (int i = 0; i < k; i++)
            cout << (char)('A' + arr[i]);
        cout << " ";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            used[i] = 1;
            arr[pos] = i;
            variations(used, arr, n, k, pos + 1);
            used[i] = 0;
        }
    }
}

int main()
{
    int n, k, arr[SIZE];
    bool used[SIZE] = { 0 };
    cin >> n >> k;
    variations(used, arr, n, k, 0);
    return 0;
}
*/
/// Задача 3
/*
#include <iostream>

using namespace std;

const int SIZE = 30;

void combinations(bool *used, int *arr, int n, int k, int pos)
{
    if (pos == k)
    {
        for (int i = 0; i < k; i++)
            cout << (char)('A' + arr[i]);
        cout << " ";
        return;
    }
    int lastElem;

    if (pos == 0) lastElem = 0;
    else lastElem = arr[pos - 1] + 1;

    for (int i = lastElem; i < n; i++)
    {
        if (!used[i])
        {
            used[i] = 1;
            arr[pos] = i;
            combinations(used, arr, n, k, pos + 1);
            used[i] = 0;
        }
    }
}

int main()
{
    int n, k, arr[SIZE];
    bool used[SIZE] = { 0 };
    cin >> n >> k;
    combinations(used, arr, n, k, 0);
    return 0;
}
*/
/// Задача 4
#include <iostream>

using namespace std;

void countWays(bool** arr, int row, int col, int n, int &counter)
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

int getCount(bool** arr, int n)
{
    int cnt = 0;
    countWays(arr, 0, 0, n, cnt);
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    bool** arr = new bool*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new bool[n];
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << getCount(arr, n) << endl;
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

