#include <iostream>

using namespace std;

const int SIZE = 20;

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

int min(int a, int b)
{
    return (a <= b)? a : b;
}

int strcmp(char *arrOne, char *arrTwo)
{
    int lenOne = strlen(arrOne);
    int lenTwo = strlen(arrTwo);
    int minLen = min(lenOne, lenTwo);
    for (int i = 0; i < minLen; i++)
    {
        if (arrOne[i] < arrTwo[i]) return -1;
        else if (arrOne[i] > arrTwo[i]) return 1;
    }
    if (lenOne < lenTwo) return -1;
    else if (lenOne > lenTwo) return 1;
    return 0;
}

int main()
{
    char arr[SIZE], arr2[SIZE];
    cin.getline(arr, SIZE - 1);
    cin.getline(arr2, SIZE - 1);
    cout << strcmp(arr, arr2) << endl;
    return 0;
}
