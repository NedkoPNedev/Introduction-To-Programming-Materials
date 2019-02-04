#include<iostream>
using namespace std;
void in(int &n1, int &m1, double a[][256])
{ cin >> n1 >> m1;
  for (int i = 0; i < n1; i++)
    for (int j = 0; j < m1; j++)
      cin >> a[i][j];
}

double FindTheBiggestElement(int n, int m, double a[][256])
{ double MaxElement = a[0][0];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (a[i][j] > MaxElement)
        MaxElement = a[i][j];
  
  return MaxElement;
}

int main()
{ 
  int n, m;
  double a[128][256];
  
  in(n, m, a);
  cout << FindTheBiggestElement(n, m, a) << endl;
  
  return 0;
}
