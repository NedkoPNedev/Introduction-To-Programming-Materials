#include <iostream>

using namespace std;

int main()
{
    int n, x, currNum, pos = -1;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> currNum;
        if (currNum == x) pos = i + 1;
    }
    cout << pos << endl;
}
