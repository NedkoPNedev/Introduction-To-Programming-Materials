#include<iostream>
using namespace std;
int main()
{ 
  int n, a[101];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  for (int i = 0; i < n / 2; i++)
  { int t = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = t;
  }
  
  for (int i = 0; i < n - 1; i++)
    cout << a[i] << ' ';
  cout << a[n - 1] << endl;
  
  return 0;
}
