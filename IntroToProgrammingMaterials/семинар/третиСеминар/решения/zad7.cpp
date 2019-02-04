#include <iostream>

using namespace std;

int main()
{
    int n, currNum = 0, temp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                currNum++;
                cout << currNum << " ";

            }
            cout << endl;
        }
        else
        {
            currNum = currNum + n;
            temp = currNum;
            for (int j = 1; j <= n; j++)
            {
                cout << temp << " ";
                temp--;
            }
            cout << endl;
        }
    }
    return 0;
}
