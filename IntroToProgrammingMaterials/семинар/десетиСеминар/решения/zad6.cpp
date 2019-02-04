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

bool checkPosition(char *text, char *pattern, int position)
{
    int patternLen = strlen(pattern);
    for (int i = 0; i < patternLen; i++)
    {
        if (pattern[i] != text[i + position]) return false;
    }
    return true;
}

bool isSubstring(char *text, char *pattern)
{
    int textLen = strlen(text);
    int patternLen = strlen(pattern);
    bool isFound = false;
    for (int i = 0; i < textLen - patternLen + 1 && !isFound; i++)
    {
        isFound = checkPosition(text, pattern, i);
    }
    return isFound;
}

int main()
{
    char text[SIZE], pattern[SIZE];
    cin.getline(text, SIZE - 1);
    cin.getline(pattern, SIZE - 1);
    (isSubstring(text, pattern)) ?  cout << "String found!\n" : cout << "String NOT found!\n";
    return 0;
}
