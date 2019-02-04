#include <iostream>
#include <iomanip>

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

void print(char *str1, char *str2)
{
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int position1 = -1, position2 = -1;
    for (int i = 0; i < str1Len && position1 == -1; i++)
    {
        for (int j = 0; j < str2Len && position2 == -1; j++)
        {
            if (str1[i] == str2[j])
            {
                position1 = i;
                position2 = j;
            }
        }
    }
    if (position1 == -1)
    {
        cout << "There aren't any equal characters.\n";
        return;
    }
    for (int i = 0; i < position2; i++)
    {
        cout << setw(position1 + 1) << str2[i] << endl;
    }
    cout << str1 << endl;
    for (int i = position2 + 1; i < str2Len; i++)
    {
        cout << setw(position1 + 1) << str2[i] << endl;
    }
}

int main()
{
    char str1[SIZE], str2[SIZE];
    cin >> str1 >> str2;
    print(str1, str2);
    return 0;
}
