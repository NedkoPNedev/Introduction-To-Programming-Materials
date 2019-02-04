#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
  int a, ok = 0;
  cin >> a;
  
  while (a > 1)
  { if (a % 2 != 0)
    { ok++;
      break;
     }
    
    a /= 2;
   }
  
  if (ok != 0) cout << "No" << endl;
  else cout << "Yes" << endl;
  
  return 0;
}
