
#include <iostream>

using namespace std;

bool fibContains(int a, int b, int x)
{
    if(x <= a)
        return x == a;
    return fibContains(b, a+b, x);
}

bool fibContains(int x)
{
    return fibContains(0,1,x);
}

int main()
{
    cout<<fibContains(3);
    return 0;
}
