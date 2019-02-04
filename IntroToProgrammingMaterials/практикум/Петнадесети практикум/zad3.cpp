//������ � �������� �������. �� �� �������� ������� �� ��-����� ���, ����� ������� �������� �������������� ������� f
// ��� ���������� �� ����� ��� �� � � ����� ������� ����� � �������� �������������� ������� g ��� ���������� �� ����� ��� �� � � ������� ������� �����.

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

typedef double(*type)(double);

void cinArr(double arr[][MAX_SIZE], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
}

void coutArr(double arr[][MAX_SIZE], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

void map(double *arr, int n, type f)
{
    for(int i=0;i<n;i++)
        arr[i] = f(arr[i]);
}

void mapFG(double arr[][MAX_SIZE], int n, type f, type g)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0) map(arr[i], n, f);
        else map(arr[i], n, g);
    }
}

int main()
{

    return 0;
}
