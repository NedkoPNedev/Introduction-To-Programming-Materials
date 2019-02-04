#include<iostream>
using namespace std;
int main()
{ 
  int a, b;
  cin >> a >> b;
  
  //First solution
  int c = a;
  a = b;
  b = c;
  
  //Second solution
  /*a = a + b;
  b = a - b;
  a = a - b;*/
  
  //Third solution
 //  //5(0101) 10(1010)
 //  a ^= b;//a1111  b1010
 //  b ^= a;//a1111  b0101
 //  a ^= b;//a1010  b0101
  
  cout << a << ' ' << b << endl;
  
  return 0;
}
