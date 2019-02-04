#include <iostream>
#include <string.h>

using namespace std;

const int MAX_SIZE = 50;
const int MAX_LEN = 10;

int main()
{
    char matrix[MAX_SIZE][MAX_SIZE][MAX_LEN];
    int n;
    cin >> n;
    char mainDiag[MAX_SIZE * MAX_LEN], secondDiag[MAX_SIZE * MAX_LEN];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        strcat(mainDiag, matrix[i][i]);
        strcat(secondDiag, matrix[n - i - 1][i]);
    }

    (strcmp(mainDiag,secondDiag) == 0) ? cout << "Yes.\n" : cout << "No.\n";
}
/*
3
ab ba cca
daaa tf eww
ab tre cca
*/
