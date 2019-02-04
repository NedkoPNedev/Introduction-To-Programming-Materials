#include<iostream>
using namespace std;
bool isPrimeNumber(int number)
{ for (int i = 2; i * i <= number; i++) // <=> for (int i = 2; i < n; i++)    i * i is optimization
  if (number % i == 0) return false;
  
  return true;
}

double FindPrimeNumbers(int n)
{ int a = 0, answer = 0;
  for (int i = 0; i < n; i++)
  { cin >> a;
    
    if (a > 1)
      answer += isPrimeNumber(a);
  }
  
  return answer;
}

int main()
{ 
  int n;
  cin >> n;
  
  cout << FindPrimeNumbers(n) << endl;
  
  return 0;
}
