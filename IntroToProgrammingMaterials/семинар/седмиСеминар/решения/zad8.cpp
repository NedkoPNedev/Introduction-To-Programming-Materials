#include <iostream>

using namespace std;

void removeFromArray(int* arr, int *len, int index)
{
    for (int i = index - 1; i < *len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*len)--;
}

int main()
{
    int n, arr[100], number;
    cin >> n >> number;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            removeFromArray(arr, &n, i + 1);
            i--;
        }
    }
    cout << n << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
