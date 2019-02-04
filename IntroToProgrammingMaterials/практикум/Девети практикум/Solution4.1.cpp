#include <iostream>

using namespace std;

int main() 
{
  const int MAX_SIZE = 10;
  int arr[MAX_SIZE][MAX_SIZE], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) 
        cin >> arr[i][j];

    
  for (int i = 0; i < 2 * n - 1; i++) {
    int startCol = 0, endCol = i;
    if (i > n - 1) {
      startCol = i - (n - 1);
      endCol = n - 1;
    }
    for (int j = startCol; j <= endCol; j++) {
      cout << arr[i - j][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
