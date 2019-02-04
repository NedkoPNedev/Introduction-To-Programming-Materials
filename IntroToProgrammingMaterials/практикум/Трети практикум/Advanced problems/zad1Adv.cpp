#include<iostream>
using namespace std;
int main()
{ 
  int x, ans = 0;
  cin >> x;
  
  //First solution
  while (x & (x - 1))
  { x &= (x - 1);
    ans++;
  }
  cout << ans + 1 << endl;
  //example with 7
  // 0111 &  0110 = 0110 & 0101 =0100 & 0011 = 0000
  //   7        6      6     5     4      3       0
  //   12
  //1100 & 1011 = 1000 & 0111 = 0000
  // 10
	//1010 & 1001 = 1000 & 0111= 0000
	// 15
	//1111 & 1110 = 1110 & 1101 = 1100 & 1011 = 1000 & 0111 =0000
  /*
  //Second Solution
  while (x != 0)
  { ans += (x & 1);
    x >>= 1;
  }
  
  cout << ans << endl;
  */
  return 0;
}

