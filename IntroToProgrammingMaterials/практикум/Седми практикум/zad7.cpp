#include<iostream>
using namespace std;
int main()
{ 
  int n, element, a[101];
  cin >> n >> element;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  bool ok = false;
  for (int i = 0; i < n; i++)
    if (a[i] == element)
    { ok = true;
      for (int j = i; j < n - 1; j++)
        a[j] = a[j + 1];
      
      i = n + 1;
    }
  
  if (ok == false)
    cout << "Error. There is no such element in the array." << endl;
  
  else
  { n--;
    cout << n << endl;
    for (int i = 0; i < n - 1; i++)
      cout << a[i] << ' ';
    cout << a[n - 1] << endl;
  }
  
  return 0;
}
