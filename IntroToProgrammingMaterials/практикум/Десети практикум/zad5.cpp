#include<iostream>
using namespace std;
void Solve(int n)
{ int Saven = n, p = 1, ones = 0;
  while (n != 0)
  { ones += p;
    p *= 2;
    n /= 2;
  }
  
  n = Saven;
  if (n == 0) cout << 1 << endl;
  else cout << (n ^ ones) << endl;
}

int main()
{ 
  int n;
  cin >> n;
  
  Solve(n);
  
  return 0;
}
