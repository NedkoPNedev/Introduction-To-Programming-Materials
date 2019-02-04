#include <cstring>
#include <iostream>

using namespace std;

int findIt(char[], char[]);
bool areEqual(char[], const unsigned&, char[]);
const unsigned MAX_LENGTH = 100;

int main() {
  char str1[MAX_LENGTH], str2[MAX_LENGTH], result[MAX_LENGTH];
  cin.getline(str1, MAX_LENGTH);
  cin.getline(str2, MAX_LENGTH);

  int position = findIt(str1, str2);
  cout << ((position < 0) ? "Nope\n" : "Yessssss\n");
  return 0;
}

int findIt(char str1[], char str2[]) {
  int idx = -1;
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  if (len1 < len2) return -1;

  int i = 0;
  bool found = false;
  while (!found && i <= (len1 - len2)) {
    if (!areEqual(str1, i, str2))
      i++;
    else {
      found = true;
      idx = i;
    }
  }
  return idx;
}

bool areEqual(char str1[], const unsigned& idx, char str2[]) {
  unsigned len = strlen(str2);
  bool flag = true;
  for (int i = 0; (flag && (i < len));) {
    if (str1[idx + i] == str2[i])
      i++;
    else
      flag = false;
  }
  return flag;
}