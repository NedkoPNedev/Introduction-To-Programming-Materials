#include<iostream>
using namespace std;
int fact(int n)
{ int p = 1;
  for (int i = 0; i < n; i++)
    p *= (i + 1);
  
  return p;
}

int main()
{ 
  int n;
  cin >> n;
  
  cout << fact(n) << endl;
  
  return 0;
}
