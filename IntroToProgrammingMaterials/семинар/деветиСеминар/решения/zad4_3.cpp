#include <iostream>

using namespace std;

int main()
{
    int n, arr[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int startRow = 0, endRow = n - 1, startCol = 0, endCol = n - 1;
    int currRow = 0, currCol = 0, movementType = 0;
    while (startRow <= endRow)
    {
        if (currRow >= startRow && currRow <= endRow && currCol >= startCol && currRow <= endCol)
        {
            cout << arr[currRow][currCol] << " ";
        }
        switch(movementType)
        {
            case 0: currCol++; break;
            case 1: currRow++; break;
            case 2: currCol--; break;
            case 3: currRow--; break;
        }
        if (currCol > endCol)
        {
            currCol--;
            currRow++;
            movementType = 1;
        }
        else if (currRow > endRow)
        {
            currRow--;
            currCol--;
            movementType = 2;
        }
        else if (currCol < startCol)
        {
            currCol++;
            currRow--;
            movementType = 3;
        }
        else if (currRow < startRow)
        {
            cout << endl;
            currCol++;
            currRow += 2;
            movementType = 0;
            startRow++, startCol++, endRow--, endCol--;
        }
    }

}
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
