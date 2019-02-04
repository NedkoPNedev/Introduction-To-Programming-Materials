#include<iostream>
using namespace std;
int main()
{ 
  int n, a[101];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  int MultEven = 1, MultOdd = 1;
  for (int i = 0; i < n; i++)
  { if (i % 2 == 0)
      MultOdd *= a[i];
    
    else MultEven *= a[i];
  }
  
  if (MultOdd >= MultEven)
  { cout << MultOdd << endl;
    for (int i = 0; i < n - 1; i += 2)
      cout << a[i] << ' ';
    
    if (n % 2 != 0) cout << a[n - 1] << endl;
  }
  
  else
  { cout << MultEven << endl;
    for (int i = 1; i < n - 1; i += 2)
      cout << a[i] << ' ';
    
    if (n % 2 == 0) cout << a[n - 1] << endl;
  }
  
  return 0;
}
