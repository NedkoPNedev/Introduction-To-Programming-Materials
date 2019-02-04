
#include <iostream>

using namespace std;

bool contains(int *a, int size, int x)
{
    if(size == 0) return false;
    return a[size-1] == x || contains(a, size - 1, x);
}

int main()
{
    int a[10] = {1,6,3,4,2,1,3,4,9,0};
    cout<<contains(a,10,2);
}
