#include<iostream>
using namespace std;
int main()
{ 
  int n, element, a[101];
  cin >> n >> element;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  for (int i = 0; i < n; i++)
    if (a[i] == element)
    { for (int j = i; j < n - 1; j++)
        a[j] = a[j + 1];
      
      n--;
      i--;
    }
  
  cout << n << endl;
  if (n > 0)
  { for (int i = 0; i < n - 1; i++)
      cout << a[i] << ' ';
    cout << a[n - 1] << endl;
  }
  
  return 0;
}
