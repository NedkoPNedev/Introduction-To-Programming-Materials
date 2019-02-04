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

bool isPalindrome(char *arr)
{
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
       if (arr[i] != arr[len - i - 1]) return false;
    }
    return true;
}

int main()
{
    char arr[SIZE];
    cin.getline(arr, SIZE - 1);
    (isPalindrome(arr)) ? cout << "It is a palindrome.\n" : cout << "It is NOT a palindrome.\n";
    return 0;
}
