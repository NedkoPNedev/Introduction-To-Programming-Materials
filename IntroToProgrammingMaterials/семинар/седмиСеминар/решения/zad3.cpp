#include <iostream>

using namespace std;

int main()
{
    int n, arr[100];
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (n != 0)
    {
        cout << sum / n << endl;
    }
    return 0;
}
