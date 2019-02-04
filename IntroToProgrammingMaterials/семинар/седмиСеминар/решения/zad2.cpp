#include <iostream>

using namespace std;

int main()
{
    int n, arr[100], odd = 1, even = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((i + 1) % 2 == 0)
        {
            even = even * arr[i];
        }
        else
        {
            odd = odd * arr[i];
        }
    }
    if (even >= odd)
    {
        cout << even << "\n";
        for (int i = 1; i < n; i += 2)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << odd << "\n";
        for (int i = 0; i < n; i += 2)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
