#include <iostream>

using namespace std;

int main()
{
    int n, index, arr[100];
    cin >> n >> index;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = index - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
