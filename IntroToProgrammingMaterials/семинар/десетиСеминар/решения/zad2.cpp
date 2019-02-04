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

void swapSymbols(char *arr, char oldSymb, char newSymb)
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == oldSymb) arr[i] = newSymb;
    }
}

int main()
{
    char arr[SIZE], symbol, newSymbol;
    cin >> symbol >> newSymbol;
    cin.ignore();
    cin.getline(arr, SIZE - 1);
    swapSymbols(arr, symbol, newSymbol);
    cout << arr << endl;
    return 0;
}
