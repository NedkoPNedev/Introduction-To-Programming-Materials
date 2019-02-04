#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void Solve(char a[])
{ int SizeOfa = strlen(a), CurrentNumber = 0, ans = 0;
  for (int i = 0; i < SizeOfa; i++)
  { if (a[i] >= '0' && a[i] <= '9')
      CurrentNumber = CurrentNumber * 10 + (a[i] - '0');
    
    else
    { ans += CurrentNumber;
      CurrentNumber = 0;
    }
  }
  
  ans += CurrentNumber;
  cout << ans << endl;
}

int main()
{ 
  char a[101];
  cin.getline(a, 100);
  
  Solve(a);
  
  return 0;
}
