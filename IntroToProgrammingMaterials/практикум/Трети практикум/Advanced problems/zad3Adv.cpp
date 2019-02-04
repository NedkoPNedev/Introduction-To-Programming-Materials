#include<iostream>
using namespace std;
int main()
{ 
  char a, b, c;
  int l = 0;
  cin >> a >> b >> c;
  
  l = a << 16;
  l |= (b << 8);
  l |= c;
  
  for (int i = 16; i >= 0; i -= 8)
  { char CurrentLetter = (char)(l >> i);
    if (CurrentLetter == 'f')
    cout << "FFFFFF\n"
            "FF\n"
            "FFFFFF\n"
            "FF\n"
            "FF\n"
            "FF\n" << endl;
    
    else if (CurrentLetter == 'm')
    cout << "M     M\n"
            "M M M M\n"
            "M  M  M\n"
            "M     M\n"
            "M     M\n"
            "M     M\n" << endl;
    
    else if (CurrentLetter == 'i')
    cout << "IIIIII\n"
            "  II\n"
            "  II\n"
            "  II\n"
            "  II\n"
            "IIIIII\n" << endl;
   }
  
  return 0;
}
