#include<iostream>
using namespace std;
void swapUsingReferences(int &a1, int &b1)
{ int t = a1;
  a1 = b1;
  b1 = t;
}

void swapUsingPointers(int* a1, int* b1)
{ int t = *a1;
  *a1 = *b1;
  *b1 = t;
}

int main()
{ 
  int a, b;
  cin >> a >> b;
  
  swapUsingReferences(a, b);
  cout << a << ' ' << b << endl;
  
  swapUsingPointers(&a, &b);
  cout << a << ' ' << b << endl;
  
  return 0;
}
