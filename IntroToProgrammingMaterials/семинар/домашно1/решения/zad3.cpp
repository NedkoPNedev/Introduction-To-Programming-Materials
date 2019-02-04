#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 100000;
    bool arr[SIZE];
    int n, sum;
    cin >> n;
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i < n; i++) arr[i] = 1;
    for (int i = 2; i * i < n; i++)
    {
        if (arr[i])
        {
            sum = i * 2;
            while (sum < n)
            {
                arr[sum] = 0;
                sum += i;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " - ";
        (arr[i]) ? cout << "Prime\n" : cout << "Not prime\n";
    }
    return 0;
}
