#include<iostream>
using namespace std;
double FindTheSum(int i, int n1)
{ if (i > n1 - 2) return n1;
  return i + 1.0 / FindTheSum(i + 2, n1);
}

int main()
{ 
  int n;
  cin >> n;
  
  cout << FindTheSum(1, n) << endl;
  
  return 0;
}
