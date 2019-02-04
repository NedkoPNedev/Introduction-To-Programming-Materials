#include<iostream>
#include<stdio.h>
using namespace std;
void in(int &n, int a[][101])
{ cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
}

void transpose(int n, int a[][101], int b[][101])
{ for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      b[j][i] = a[i][j];
}

void print(int n, int b[][101])
{ cout << n << endl;
  for (int i = 0; i < n; i++)
  { for (int j = 0; j < n - 1; j++)
      cout << b[i][j] << ' ';
    cout << b[i][n - 1] << endl;
  }
}

int main()
{ 
  int n, a[101][101], b[101][101];
  
  in(n, a);
  transpose(n, a, b);
  print(n, b);
  
  return 0;
}
