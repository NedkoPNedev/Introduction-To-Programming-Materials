#include <iostream>

using namespace std;

const int N = 21, M = 31, K = 41;

void multiplyMatrices(int n, int m, int k, int A[][M], int B[][K], int C[][K])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[N][M] = { 0 }, B[M][K] = { 0 }, C[N][K] = { 0 };
    int n, m, k;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    cin >> m >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            cin >> B[i][j];

    multiplyMatrices(n, m, k, A, B, C);

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
/*
3 2
1 2
3 4
5 6

2 3
7 8 9
10 11 12

3 3
*/
