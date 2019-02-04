#include <iostream>
using namespace std;
double sum(int n)
{
    if(n == 1)
        return 1;
    return 1.0 / n + sum(n - 1);
}
int main()
{
    cout << sum(3) << endl;
}
