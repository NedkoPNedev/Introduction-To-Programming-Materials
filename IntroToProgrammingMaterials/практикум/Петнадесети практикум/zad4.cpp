#include<iostream>
using namespace std;
void in(int &n, int a[])
{ cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
}

void Sort(bool (*compare)(int, int), int n, int a[])
{ for (int i = 0; i < n - 1; i++)
  { int k = i, minn = a[i];
    for (int j = i + 1; j < n; j++)
      if (compare(minn, a[j]) == true)
      { minn = a[j];
        k = j;
      }
    
    int t = a[i];
    a[i] = a[k];
    a[k] = t;
  }
}

bool CompareTwoIntegers(int a, int b)
{ return a > b;
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
  
  in(n, a);
  
  bool (*compare)(int, int);
  compare = CompareTwoIntegers;
  
  Sort(compare, n, a);
  
  print(n, a);
  
  return 0;
}
