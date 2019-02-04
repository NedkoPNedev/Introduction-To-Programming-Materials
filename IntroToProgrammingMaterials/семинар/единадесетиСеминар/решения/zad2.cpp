#include <iostream>

using namespace std;

const int SIZE = 100;

long long fibNum(int n)
{
    if (n <= 2) return 1;
    return fibNum(n - 1) + fibNum(n - 2);
}

long long fibNumMemo(int n, long long *memArr)
{
    if (memArr[n] != 0) return memArr[n];
    memArr[n] = fibNumMemo(n - 1, memArr) + fibNumMemo(n - 2, memArr);
    return memArr[n];
}

int main()
{
    int n;
    long long memArr[SIZE] = {0};
    memArr[1] = 1;
    memArr[2] = 1;
    cin >> n;
    cout << fibNum(n) << endl;;
    cout << fibNumMemo(n, memArr) << endl;
    return 0;
}
