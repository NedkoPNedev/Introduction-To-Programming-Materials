#include <iostream>
#include <cstring>
using namespace std;
bool isVowel(char c)
{
    if(c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'y' || c == 'i')
        return true;
    if(c == 'A' || c == 'O' || c == 'E' || c == 'U' || c == 'Y' || c == 'I')
        return true;
    return false;
}

int numberOfVowels(char* str)
{
    int counter = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(isVowel(str[i]))
            counter++;
    }
    return counter;
}

void removeVowels(char* str)
{
    int realSize = strlen(str);
    for(int i = 0; i < strlen(str); i++)
    {
        if(isVowel(str[i]))
        {
            for(int j = i + 1; j < strlen(str); j++)
                str[j - 1] = str[j];
            i--;
            realSize--;
        }
    }
    str[realSize - 1] = '\0';
}

void replaceChar(char* str, char c1, char c2)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c1)
            str[i] = c2;
    }
}
int main()
{
    char str[20] = "i love music lol";
    cout << numberOfVowels(str) << endl;
    replaceChar(str, 'l', 'L');
    removeVowels(str);
    cout << str << endl;
}
