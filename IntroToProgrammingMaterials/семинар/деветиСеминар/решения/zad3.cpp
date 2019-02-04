#include <iostream>

using namespace std;

const int MAX_SIZE = 256;

void input(int &rows, int &cols, int &rowNum, double arr[][MAX_SIZE])
{
    cin >> rows >> cols >> rowNum;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void replaceRows(int row1, int row2, int cols, double arr[][MAX_SIZE])
{
    for (int j = 0; j < cols; j++)
    {
        arr[row1][j] = arr[row2][j];
    }
}

void deleteRow(int &rows, int &cols, int &rowNum, double arr[][MAX_SIZE])
{
    for (int i = rowNum; i < rows - 1; i++)
    {
        replaceRows(i, i + 1, cols, arr);
    }
    rows--;
}

void output(int rows, int cols, double arr[][MAX_SIZE])
{
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n, k;
    double arr[MAX_SIZE][MAX_SIZE];
    input(m, n, k, arr);
    deleteRow(m, n, k, arr);
    output(m, n, arr);
}
