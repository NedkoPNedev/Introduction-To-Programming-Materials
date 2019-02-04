#include <iostream>
#include <cstring>

using namespace std;

bool isFound(char* text, char* pattern, int patLen, int position)
{
    for (int i = 0; i < patLen; i++)
    {
        if (text[i + position] != pattern[i])
        {
            return false;
        }
    }
    return true;
}

char* getNewText(char* text, char* pattern)
{
    int patLen = strlen(pattern);
    int textLen = strlen(text);
    for (int i = 0; i < textLen; i++)
    {
        if (isFound(text, pattern, patLen, i))
        {
            for (int j = i; j < textLen - patLen; j++)
            {
                text[j] = text[j + patLen];
            }
            textLen -= patLen;
        }
    }
    text[textLen] = '\0';
    return text;
}

int main()
{
    char text[50], pattern[20];
    cin.getline(text, 49);
    cin.getline(pattern, 18);
    cout << getNewText(text, pattern) << endl;
}
