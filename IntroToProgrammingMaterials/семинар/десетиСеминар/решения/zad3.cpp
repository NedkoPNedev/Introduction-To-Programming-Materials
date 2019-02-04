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

void swap(char *symbOne, char *symbTwo)
{
    char temp = *symbOne;
    *symbOne = *symbTwo;
    *symbTwo = temp;
}

char* reversedString(char *arr)
{
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
        swap(arr[i], arr[len - i - 1]);
    }
    return arr;
}

int main()
{
    char arr[SIZE];
    cin.getline(arr, SIZE - 1);
    cout << reversedString(arr) << endl;
    return 0;
}
