#include<iostream>
using namespace std;
void ConvertBinNumberToDec(int n, int p, int ans)
{ if (n == 0)
  { cout << ans << endl;
    return;
  }
  
  ans += (n % 10) * p;
  ConvertBinNumberToDec(n / 10, p * 2, ans);
}

int main()
{ 
  int nBinary;
  cin >> nBinary;
  
  ConvertBinNumberToDec(nBinary, 1, 0);
  
  return 0;
}
