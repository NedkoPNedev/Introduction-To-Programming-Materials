//Да се напише функция от по-висок ред, която прилага реална едноаргументна функция f над всеки елемент на едномерен масив.

#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;

void cinArr(double *arr, int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void coutArr(double *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void map(double *arr, int n, double (*f)(double))
{
    for(int i=0;i<n;i++)
    {
        arr[i] = f(arr[i]);
    }
}

int main()
{
    double array[] = {-3,9,0,5,-4,-6};
    map(array,6,fabs);
    coutArr(array,6);
    return 0;
}
