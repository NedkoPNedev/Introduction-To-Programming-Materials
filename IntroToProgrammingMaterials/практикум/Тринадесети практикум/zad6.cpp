#include <iostream>
#include <cmath>
using namespace std;

int sum(int* arr, int size)
{
    int i = 0;
    if(size == 1)
        return arr[size - 1];
    i++;
    return arr[i - 1] + sum(arr + i, size - 1);
}

int sum2(int* arr, int size)
{
    if(size == 1)
        return arr[size - 1]; 
    return arr[size - 1] + sum2(arr, size - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sum(arr, 5) << endl;
    cout << sum2(arr, 5) << endl;
}
