#include<iostream>
using namespace std;
void in(int &n, int a[])
{ cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
}

int MultByTwo(int x)
{ return 2 * x;
}

int AddSeven(int x)
{ return x + 7;
}

void Map(int n, int a[], int (*f)(int), int (*g)(int))
{ for (int i = 0; i < n; i++)
    a[i] = f(g(a[i]));
}

void print(int n, int a[])
{ cout << n << endl;
  for (int i = 0; i < n - 1; i++)
    cout << a[i] << ' ';
  cout << a[n - 1] << endl;
}

int main()
{ 
  int n, a[128];
  int* b;
  
  in(n, a);
  
  int (*f)(int), (*g)(int);
  f = AddSeven;
  g = MultByTwo;
  
  Map(n, a, f, g);
  
  print(n, a);
  
  return 0;
}
