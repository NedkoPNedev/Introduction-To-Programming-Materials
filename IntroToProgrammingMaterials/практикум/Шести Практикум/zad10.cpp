#include<iostream>
using namespace std;
double average(int n)
{ double a = 0, sum = 0;
  for (int i = 0; i < n; i++)
  { cin >> a;
    sum += a;
  }
  
  return sum / n;
}

int main()
{ 
  int n;
  cin >> n;
  
  cout << average(n) << endl;
  
  return 0;
}
