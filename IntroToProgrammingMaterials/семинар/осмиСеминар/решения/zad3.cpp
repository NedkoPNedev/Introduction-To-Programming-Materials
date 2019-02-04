#include <iostream>
#include <string.h>

using namespace std;

char* getNewArray(char* arr, char oldChar, char newChar)
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == oldChar) arr[i] = newChar;
    }
    return arr;
}

int main()
{
    char arr[100], oldChar, newChar;
    cin >> arr >> oldChar >> newChar;
    cout << getNewArray(arr, oldChar, newChar) << endl;
}
