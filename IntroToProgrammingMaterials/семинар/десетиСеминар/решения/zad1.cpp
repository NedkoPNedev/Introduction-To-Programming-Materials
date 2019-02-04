#include <iostream>

using namespace std;

const int SIZE = 20;

int getNumDigits(char *arr, int len)
{
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9') cnt++;
    }
    return cnt;
}

int strlen(char *arr)
{
    int cnt = 0;
    while (*arr)
    {
        cnt++;
        arr++;
    }
    return cnt;
}

int main()
{
    char arr[SIZE];
    cin.getline(arr, SIZE - 1);
    cout << getNumDigits(arr, strlen(arr)) << endl;
    return 0;
}
