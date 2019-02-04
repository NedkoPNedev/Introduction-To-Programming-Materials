#include<iostream>
using namespace std;
void ConvertDecNumberToBin(int n)
{ if (n == 0) return;
  ConvertDecNumberToBin(n / 2);
  cout << n % 2;
}

int main()
{ 
  int nDecimal;
  cin >> nDecimal;
  
  ConvertDecNumberToBin(nDecimal);
  cout << endl;
  
  return 0;
}
