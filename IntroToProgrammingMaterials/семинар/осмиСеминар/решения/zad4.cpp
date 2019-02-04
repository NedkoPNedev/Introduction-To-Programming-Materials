#include <iostream>
#include <string.h>

using namespace std;

char* getNewArray(char* arr, char removedChar)
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == removedChar)
        {
            for(int j = i + 1; j < len; j++)
            {
                arr[j - 1] = arr[j];
            }
            len--;
            i--;
        }
    }
    arr[len] = '\0';
    return arr;
}

int main()
{
    char arr[100], removedChar;
    cin >> arr >> removedChar;
    cout << getNewArray(arr, removedChar) << endl;
}
