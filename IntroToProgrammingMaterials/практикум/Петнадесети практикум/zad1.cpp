//Дадени са едноаргументната функция f и целочислен интервал [a,b]. Да се дефинира функция, която намира най-голямата стойност на
// f в [a,b]

#include <iostream>
#include <cmath>

using namespace std;

int fMax(int (*f)(int), int a, int b)
{
    int max = f(a);
    for(int i = a+1;i<=b;i++)
    {
        if(max < f(i))
            max = f(i);
    }
    return max;
}

int positive(int n)
{
    return (n<0) ? abs(n):n;
}

int main()
{
    cout<<fMax(positive,-9,3);
    return 0;
}
