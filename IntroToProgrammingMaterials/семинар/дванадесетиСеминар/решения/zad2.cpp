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
    int lastElem;
    if (pos == 0) lastElem = 0;
    else lastElem = arr[pos - 1] + 1;

    for (int i = lastElem; i < n; i++)
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
