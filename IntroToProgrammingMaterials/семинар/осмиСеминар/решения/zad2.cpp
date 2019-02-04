#include<iostream>
#include<string.h>

using namespace std;

void solve(char arr[])
{
    int arrLen = strlen(arr), currNum = 0, ans = 0;
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            currNum = currNum * 10 + (arr[i] - '0');
        }
        else
        {
            ans += currNum;
            currNum = 0;
        }
    }
    ans += currNum;

    cout << ans << endl;
}

int main()
{
    char a[101];
    cin.getline(a, 100);

    solve(a);

    return 0;
}
