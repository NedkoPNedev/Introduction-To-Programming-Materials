#include<iostream>
using namespace std;
void in(int &n, int* a)
{ cin >> n;
  for (int i = 0; i < n; i++)
    cin >> *(a + i);
}

void print(int n, int* a)
{ cout << n << endl;
  for (int i = 0; i < n - 1; i++)
    cout << *(a + i) << ' ';
  cout << *(a + n - 1) << endl;
}

int main()
{ 
  int n, a[101];
  
  in(n, a);
  print(n, a);
  
  return 0;
}
