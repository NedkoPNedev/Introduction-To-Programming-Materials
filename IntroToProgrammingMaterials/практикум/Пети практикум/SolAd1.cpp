#include <iostream>
#include <cmath>
using namespace std;
/*
int sum(int* arr, int size) // òîâà å ðåêóðñèÿ
{
    if(size == 1)
        return arr[0];
    return arr[size - 1] + sum(arr, size - 1);
}*/
bool isPrime(int num)
{
    if(num <= 1)
        return false;
    if(num == 2)
        return true;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
int sumPrimePositions(int* arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        if(isPrime(i))
            sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {5, 2, 3, 4, 5};
    //cout << sum(arr, 5) << endl;
    cout << sumPrimePositions(arr, 5) << endl;
}
