#include <iostream>

using namespace std;

int main()
{
    int n, arr[100], index, newNum;
    cin >> n >> newNum >> index;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = newNum;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
