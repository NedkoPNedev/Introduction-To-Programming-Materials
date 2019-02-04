#include<iostream>
using namespace std;
int main()
{ 
  int n, answer = 0;
  
  cin >> n;
  for (int i = 0; i < n; i++)
  { int a;
    
    for (int j = 0; j < n; j++)
    { cin >> a;
      
      if (i <= n - j - 1 && a > 2)
      { bool isPrime = true;
        int k = 2;
        do
        { if (a % k == 0)
          isPrime = false;
          
          k++;
        }
        while (k * k <= a && isPrime == true);
        
        if (isPrime == true) answer++;
      }
      
      if (a == 2) answer++;
    }
  }
  
  cout << answer << endl;
  
  return 0;
}
