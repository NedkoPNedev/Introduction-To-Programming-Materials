#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE][MAX_SIZE], n, i, j;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];

    int hor =0 ,vert = 0;

    while(hor<n/2 && vert<n/2)
    {
        for(i=vert;i<n-vert;i++)
            cout<<arr[hor][i]<<" ";

        for(i=hor+1;i<n-hor;i++)
            cout<<arr[i][n-1-vert]<<" ";

        for(i=n-2-vert;i>=vert;i--)
            cout<<arr[n-1-hor][i]<<" ";

        for(i=n-2-hor;i>hor;i--)
            cout<<arr[i][vert]<<" ";
        
        hor++;
        vert++;
    }

    if(n%2 == 1) cout<<arr[n/2][n/2];
    return 0;
}
