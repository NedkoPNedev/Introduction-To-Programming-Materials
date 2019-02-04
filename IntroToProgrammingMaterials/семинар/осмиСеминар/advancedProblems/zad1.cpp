#include <iostream>
#include <string.h>

using namespace std;

const int SIZE = 50;

void swapRows(int row1, int row2, char arr[SIZE][SIZE])
{
    char temp[SIZE];
    int row1Len = strlen(arr[row1]);
    int row2Len = strlen(arr[row2]);
    for (int i = 0; i < row1Len; i++) temp[i] = arr[row1][i];
    for (int i = 0; i < row2Len; i++) arr[row1][i] = arr[row2][i];
    for (int i = 0; i < row1Len; i++) arr[row2][i] = temp[i];
}

int compare(char* str1, char* str2)
{
    int len1 = strlen(str1), len = len1;
    int len2 = strlen(str2);
    if (len2 < len) len = len2;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] < str2[i]) return 1;
        else if (str2[i] < str1[i]) return -1;
    }
    if (len1 < len2) return 1;
    else if (len2 < len1) return -1;
    return 0;
}

void sortArray(int n, char arr[SIZE][SIZE])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (compare(arr[i], arr[j]) < 0)
            {
                swapRows(i, j, arr);
            }
        }
    }
}

int main()
{
    char arr[SIZE][SIZE];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortArray(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
