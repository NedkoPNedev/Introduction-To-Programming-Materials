#include<iostream>
using namespace std;
int main()
{ 
  int n, a[101];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  double s = 0;
  for (int i = 0; i < n; i++)
    s += a[i];
  
  cout << s / n << endl;
  
  return 0;
}
