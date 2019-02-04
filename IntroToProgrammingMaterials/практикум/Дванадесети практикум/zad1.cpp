#include<iostream>
#include<cassert>
using namespace std;
void in(int &n1, int* a1)
{ cin >> n1;
  for (int i = 0; i < n1; i++)
    cin >> a1[i];
}

void print(int n1, int* a1)
{ cout << n1 << endl;
  for (int i = 0; i < n1 - 1; i++)
    cout << a1[i] << ' ';
  cout << a1[n1 - 1] << endl;
}

int main()
{ 
  int n;
  int* a = new int[100];
  assert(a != NULL);
  
  in(n, a);
  print(n, a);
  
  delete [] a;
  
  return 0;
}
