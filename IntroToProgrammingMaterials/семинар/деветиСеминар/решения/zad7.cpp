#include<iostream>
#include<stdio.h>
using namespace std;

void input(int &n, int a[][101])
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void transpose(int n, int a[][101], int b[][101])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = a[j][i];
}

void output(int n, int b[][101])
{
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}

int main()
{
  int n, a[101][101], b[101][101];

  input(n, a);
  transpose(n, a, b);
  output(n, b);

  return 0;
}
