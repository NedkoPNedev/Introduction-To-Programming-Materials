#include<iostream>
using namespace std;
void FindTheSum(int n)
{ double sum = n;
  
  for (int i = n - 2; i > 0; i -= 2)
    sum = i + (1.0 / sum);
  
  cout << sum << endl;
}

int main()
{ 
  int n;
  cin >> n;
  
  FindTheSum(n);
  
  return 0;
}
