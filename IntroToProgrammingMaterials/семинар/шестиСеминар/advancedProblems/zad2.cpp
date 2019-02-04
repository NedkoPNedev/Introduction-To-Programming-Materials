#include <iostream>

using namespace std;

int arr[100];

int getFibNum(int n)
{
    if (arr[n] != 0) return arr[n];
    arr[n] = getFibNum(n - 1) + getFibNum(n - 2);
    return arr[n];
}

int main()
{
    int n;
    arr[1] = 1;
    arr[0] = 1;
    cin >> n;
    cout << getFibNum(n) << endl;
    return 0;
}
