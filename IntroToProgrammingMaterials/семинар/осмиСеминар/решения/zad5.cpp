#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char c)
{
    if(c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'y' || c == 'i')
    {
        return true;
    }
    if(c == 'A' || c == 'O' || c == 'E' || c == 'U' || c == 'Y' || c == 'I')
    {
        return true;
    }
    return false;
}

int numberOfVowels(char* str)
{
    int counter = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(isVowel(str[i]))
        {
            counter++;
        }
    }
    return counter;
}

void removeVowels(char* str)
{
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(isVowel(str[i]))
        {
            for(int j = i + 1; j < len; j++)
            {
                str[j - 1] = str[j];
            }
            i--;
            len--;
        }
    }
    str[len] = '\0';
}

void replaceChar(char* str, char c1, char c2)
{
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == c1)
        {
            str[i] = c2;
        }
    }
}
int main()
{
    char str[50] = "I am part of this group";
    cout << numberOfVowels(str) << endl;
    replaceChar(str, 't', 'T');
    removeVowels(str);
    cout << str << endl;
}
