#include<iostream>
using namespace std;
int main()
{ 
  int x, n, answer = 1;
  cin >> x >> n;
  
  for (int i = 0; i < n; i++)
  answer *= x;
  
  cout << answer << endl;
  
  return 0;
}
