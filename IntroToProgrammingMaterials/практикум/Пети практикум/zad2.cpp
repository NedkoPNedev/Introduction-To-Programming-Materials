#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{ 
  int n;
  cin >> n;
  
  int width = (int)(log10(n * n)) + 1; //Finding the number of digits in n * n.
  int t = 1;
  for (int i = 0; i < n; i++)
  { for (int j = 0; j < n - 1; j++)
      cout << setw(width) << t++ << ' ';
    
    cout << setw(width) << t++ << endl;
  }
  
  return 0;
}
