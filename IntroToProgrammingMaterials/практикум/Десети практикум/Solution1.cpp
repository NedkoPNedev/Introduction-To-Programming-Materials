#include <cstring>
#include <iostream>
using namespace std;

const unsigned MAX_LENGTH = 32;
void solve(char[], char[]);

int main() {
  char str1[MAX_LENGTH], str2[MAX_LENGTH];
  cin.getline(str1, MAX_LENGTH);
  cin.getline(str2, MAX_LENGTH);
  solve(str1, str2);
  return 0;
}

void solve(char str1[], char str2[])
{
  unsigned len = min(strlen(str1), strlen(str2))
  for (int i = 0; i < len ; ++i) {
    if((str1[i] ^ str2[i])!=0) 
    {
      cout<<false<<endl;
      return;
    }
  }
  cout<< true<<endl;
}