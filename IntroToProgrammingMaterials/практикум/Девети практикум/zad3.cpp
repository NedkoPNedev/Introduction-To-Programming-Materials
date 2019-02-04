#include<iostream>
using namespace std;
void in(int &n1, int &m1, int &k1, double a[][101])
{ cin >> n1 >> m1 >> k1;
  for (int i = 0; i < n1; i++)
    for (int j = 0; j < m1; j++)
      cin >> a[i][j];
}

void DeleteKthRowOfMatrix(int &n, int m, int k, double a[][101])
{ for (int i = k; i < n - 1; i++)
    for (int j = 0; j < m; j++)
      a[i][j] = a[i + 1][j];
  
  n--;
}

void print(int n, int m, double a[][101])
{ cout << n << ' ' << m << endl;
  for (int i = 0; i < n; i++)
  { for (int j = 0; j < m - 1; j++)
    {
      cout << a[i][j] << ' ';
    }
      cout << a[i][m - 1] << endl;
  }
}

int main()
{ 
  int n, m, k;
  double a[101][101];
  
  in(n, m, k, a);
  DeleteKthRowOfMatrix(n, m, k, a);
  print(n, m, a);
  
  return 0;
}
