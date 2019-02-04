#include <iostream>

using namespace std;

int main()
{
    int n, number, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        sum = sum + number;
    }
    cout << sum << endl;
    return 0;
}
