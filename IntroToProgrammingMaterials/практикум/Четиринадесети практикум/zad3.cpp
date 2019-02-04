#include<iostream>
using namespace std;
void in(int &n1, int &m1, int a[][128])
{ cin >> n1 >> m1;
  for (int i = 0; i < n1; i++)
    for (int j = 0; j < m1; j++)
      cin >> a[i][j];
}

bool CheckValidityOfThisCell(int i, int j, int n, int m, int a[][128], bool used[][128])
{ return !(i < 0 || i >= n || j < 0 || j >= m || a[i][j] == 0 || used[i][j] == true);
}

void FindIslands(int i, int j, int n, int m, int a[][128], bool used[][128])
{ if (CheckValidityOfThisCell(i, j, n, m, a, used) == false) return;
  
  used[i][j] = true;
  
  FindIslands(i - 1, j, n, m, a, used);
  FindIslands(i + 1, j, n, m, a, used);
  FindIslands(i, j - 1, n, m, a, used);
  FindIslands(i, j + 1, n, m, a, used);
}

void Solve(int n, int m, int a[][128])
{ int ans = 0;
  bool used[128][128];
  
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      used[i][j] = false;
  
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (a[i][j] == 1 && used[i][j] == false)
      { FindIslands(i, j, n, m, a, used);
        ans++;
      }
  
  cout << ans << endl;
}

int main()
{ 
  int n, m, a[128][128];
  
  in(n, m, a);
  Solve(n, m, a);
  
  return 0;
}
