#include<iostream>
using namespace std;
void Swap(int &a1, int &b1)
{ int c = a1;
  a1 += b1;
  b1 *= c;
}

int main()
{ 
  int a, b;
  cin >> a >> b;
  
  Swap(a, b);
  
  cout << a << ' ' << b << endl;
  
  return 0;
}
