#include<iostream>
using namespace std;
int step(int x, int n)
{ int answer = 1;
  for (int i = 0; i < n; i++)
    answer *= x;
  
  return answer;
}

int main()
{ 
  int x, n;
  cin >> x >> n;
  
  cout << step(x, n) << endl;
  
  return 0;
}
