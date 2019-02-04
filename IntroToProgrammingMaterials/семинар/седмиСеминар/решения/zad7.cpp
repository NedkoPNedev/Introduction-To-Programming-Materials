#include <iostream>

using namespace std;

void removeFromArray(int arr[], int len, int index)
{
    for (int i = index - 1; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int n, arr[100], number, index = -1;
    cin >> n >> number;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            index = i + 1;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Error!\n";
    }
    else
    {
        removeFromArray(arr, n, index);
        n--;
        cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
