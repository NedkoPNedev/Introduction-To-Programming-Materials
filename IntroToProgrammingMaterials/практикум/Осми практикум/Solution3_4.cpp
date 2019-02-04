#include <iostream>
#include <cstring>
using namespace std;
char* replaceEverySymbol(char* str, char s, char repl)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == s)
            str[i] = repl;
    }
    return str;
}
char* deleteEverySymbol(char* str, char ch)
{
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        if(str[i] == ch)
        {
            for(int j = i + 1; j < length; j++)
            {
                str[j - 1] = str[j];
            }
            length--;
            i--;
        }
    }
    str[length] = '\0';
    return str;
}
int main()
{
    char str[10] = "abcdabbsx", ch1 = 'b', ch2 = 'A';
    cout << replaceEverySymbol(str, ch1, ch2) << endl;
    cout << deleteEverySymbol(str, ch2) << endl;
}
