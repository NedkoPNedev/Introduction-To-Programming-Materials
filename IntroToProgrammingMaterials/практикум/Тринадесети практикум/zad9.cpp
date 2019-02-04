#include<iostream>
using namespace std;
bool IsPalindrome(int a[], int Start, int End)
{ if (Start >= End) return true;
  return (a[Start] == a[End]) && IsPalindrome(a, Start + 1, End - 1);
}

//Second Solution
/*bool IsPalindrome(int a[], int Start, int End)
{ if (Start >= End) return true;
  if (a[Start] != a[End]) return false;
  return IsPalindrome(a, Start + 1, End - 1);
}*/

//Third Solution
/*void IsPalindrome(int a[], int Start, int End, bool &ok)
{ if (Start >= End)
  { ok = true;
    return;
  }
  
  if (a[Start] != a[End])
  { ok = false;
    return;
  }
  
  IsPalindrome(a, Start + 1, End - 1, ok);
}*/


void PutDigitsInArray(int n1, int &s1, int a1[])
{ while (n1 != 0)
  { a1[s1++] = n1 % 10;
    n1 /= 10;
  }
}

int main()
{ 
  int n;
  cin >> n;
  
  int s = 0, a[21];
  PutDigitsInArray(n, s, a);
  
  /*bool ok = true;
  IsPalindrome(a, 0, s - 1, ok);
  cout << boolalpha << ok << endl;
  //The above three lines are for the third solution.*/
  
  cout << boolalpha << IsPalindrome(a, 0, s - 1) << endl;
  
  return 0;
}
