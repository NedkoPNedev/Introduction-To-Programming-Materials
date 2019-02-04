#include<iostream>
using namespace std;
unsigned long long dp[1001];
unsigned long long fib(int n1)
{ if (n1 == 1) return 0;
  if (n1 == 2) return 1;
  
  if (dp[n1] != 0) return dp[n1];
  
  return dp[n1] = fib(n1 - 1) + fib(n1 - 2);
}

int main()
{ 
  int n;
  cin >> n;
  
  cout << fib(n) << endl;
  
  return 0;
}
