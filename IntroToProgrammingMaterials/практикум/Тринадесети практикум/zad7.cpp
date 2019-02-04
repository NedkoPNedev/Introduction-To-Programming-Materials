#include<iostream>
using namespace std;
int fib(int n)
{ if (n < 2) return 1;
  return fib(n - 1) + fib(n - 2);
}

//Second solution
/*int fib(int n, int a, int b)
{ if (n < 2) return b;
  return fib(n - 1, b, a + b);
}*/

int main()
{ 
  int n;
  cin >> n;
  
  //cout << fib(n, 1, 1) << endl; //For the second solution.
  cout << fib(n) << endl;
  
  return 0;
}
