#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{ 
  int n, t = 0;
  cin >> n;
  
  int SizeOfSpace = (int)log10(n * n) + 1;
  
  cout << left;
  for (int i = 0; i < n; i++)
  { if (i % 2 == 0)
    { for (int j = t * n + 1; j < (t * n + 1) + (n - 1); j++)
      cout << setw(SizeOfSpace) << j << ' ';
      cout << setw(SizeOfSpace) << (t * n + 1) + (n - 1) << endl;
      t += 2;
     }
    
    else
    { for (int j = t * n; j > (t * n) - (n - 1); j--)
      cout << setw(SizeOfSpace) << j << ' ';
      cout << setw(SizeOfSpace) << (t * n) - (n - 1) << endl;
     }
   }
  
  return 0;
}
