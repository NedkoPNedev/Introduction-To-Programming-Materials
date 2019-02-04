#include<iostream>
using namespace std;
int main()
{ 
  int n, index, a[101];
  cin >> n >> index;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  for (int i = index - 1; i < n - 1; i++)
    a[i] = a[i + 1];
  
  n--;
  
  cout << n << endl;
  for (int i = 0; i < n - 1; i++)
    cout << a[i] << ' ';
  cout << a[n - 1] << endl;
  
  return 0;
}
