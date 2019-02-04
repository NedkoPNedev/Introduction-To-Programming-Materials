#include<iostream>
using namespace std;
int main()
{ 
  int n, element, index, a[101];
  cin >> n >> element >> index;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  for (int i = n - 1; i >= index - 1; i--)
    a[i + 1] = a[i];
  
  a[index - 1] = element;
  n++;
  
  cout << n << endl;
  for (int i = 0; i < n - 1; i++)
    cout << a[i] << ' ';
  cout << a[n - 1] << endl;
  
  return 0;
}
