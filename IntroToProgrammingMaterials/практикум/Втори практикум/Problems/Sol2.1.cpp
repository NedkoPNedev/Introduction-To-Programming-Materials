#include<iostream>
using namespace std;
int main()
{ 
  int d, m, y;
  cin >> d >> m >> y;
  cout << boolalpha << ( (m > 0 && m <= 12 && d > 0) && ((m % 2 != 0 && m < 8 && d <= 31) || (m % 2 == 0 && m > 7 && d <= 31) || (m % 2 == 0 && m != 2 && m < 8 && d <= 30) || (m % 2 != 0 && m != 2 && m > 7 && d <= 30) ||
                                            (m == 2 && (y % 4 == 0 || (y % 400 == 0 && y % 100 != 0)) && d <= 29) ||
                                            (m == 2 && !(y % 4 == 0 || (y % 400 == 0 && y % 100 != 0)) && d <= 28))) << endl;
  
  return 0;
}
