#include <iostream>

using namespace std;

int getSum(int arr[], int len)
{
    int sum = 0;
    bool isPrime;
    for (int i = 0; i < len; i++)
    {
        isPrime = true;
        for (int j = 2; j * j <= i + 1; j++)
        {
            if ((i + 1) % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime && (i + 1) >= 2)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getSum(arr, n) << endl;
    return 0;
}
