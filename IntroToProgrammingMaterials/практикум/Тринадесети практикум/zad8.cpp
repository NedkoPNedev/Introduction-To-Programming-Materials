#include<iostream>
using namespace std;
double FindTheSum(int n, int br)
{ if (br == n) return n;
  return 1 + 1 / FindTheSum(n, br + 1);
}

//Second solution
/*void FindTheSum(int n, int br, double &sum)
{ if (br == n) return;
  sum = 1 + 1 / sum;
  FindTheSum(n, br + 1, sum);
}*/

int main()
{ 
  int n;
  cin >> n;
  
  /*double sum = n;
  FindTheSum(n, 0, sum);
  cout << sum << endl;
  //The above three lines are for the second solution.*/
  
  cout << FindTheSum(n, 0) << endl;
  
  return 0;
}
