#include<iostream>
#include<cassert>
using namespace std;
int capacity = 100;
void in(int &n1, int* a1)
{ cin >> n1;
  for (int i = 0; i < n1; i++)
    cin >> a1[i];
}

void resizeDown(int n1, int* &a1)
{ int* savea1 = a1;
  //capacity /= 2; //instead of dividing the capacity in the next row of the code, we can divide it here for example and then the next row will look like this: a1 = new int[capacity];
  a1 = new int[capacity /= 2]; //capacity is divided by two and the new value of the capacity is used to set the new size of the dynamic array but dividing the capacity this way makes the code less readable and you should avoid it.
  assert(a1 != NULL);
  
  for (int i = 0; i < n1; i++)
    a1[i] = savea1[i];
  
  delete [] savea1;
}

void resizeUp(int n1, int* &a1)
{ int* savea1 = a1;
  //capacity *= 2; //instead of multiplying the capacity in the next row of the code, we can multiply it here for example and then the next row will look like this: a1 = new int[capacity];
  a1 = new int[capacity *= 2]; //capacity is divided by two and the new value of the capacity is used to set the new size of the dynamic array but multiplying the capacity this way makes the code less readable and you should avoid it.
  assert(a1 != NULL);
  
  for (int i = 0; i < n1; i++)
    a1[i] = savea1[i];
  
  delete [] savea1;
}

void print(int n1, int* a1)
{ cout << n1 << ' ' << capacity << endl;
  for (int i = 0; i < n1 - 1; i++)
      cout << a1[i] << ' ';
  cout << a1[n1 - 1] << endl;
}

int main()
{ 
  int n;
  int* a = new int[capacity];
  assert(a != NULL);
  
  in(n, a);
  
  if (n < capacity / 4)
    resizeDown(n, a);
  print(n, a);
  
  resizeUp(n, a);
  print(n, a);
  
  delete [] a;
  
  return 0;
}
