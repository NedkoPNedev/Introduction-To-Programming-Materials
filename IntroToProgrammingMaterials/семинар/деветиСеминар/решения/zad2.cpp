#include <iostream>

using namespace std;

const int MAX_SIZE = 256;

void input(int &rows, int &cols, double arr[][MAX_SIZE])
{
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

double getMaxElement(int rows, int cols, double arr[][MAX_SIZE])
{
    double maxElement = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxElement)
            {
                maxElement = arr[i][j];
            }
        }
    }
    return maxElement;
}

int main()
{
    double arr[MAX_SIZE][MAX_SIZE];
    int n, m;
    input(m, n, arr);
    cout << getMaxElement(m, n, arr) << endl;
    return 0;
}

/*
3 3
2.4 3.5 1.8
0.4 5.6 1.2
2.5 7.6 8.9
*/
