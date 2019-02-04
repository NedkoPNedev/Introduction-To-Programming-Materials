#include<iostream>
using namespace std;
int main()
{ 
  int n;
  double p = 1.0;
  
  cin >> n;
  
  for (int i = 0; i < n; i++)
  { double a;
    cin >> a;
    
    if ((i + 1) % 2 == 0) p *= a;
   }
  
  cout << p << endl;
  
  return 0;
}
