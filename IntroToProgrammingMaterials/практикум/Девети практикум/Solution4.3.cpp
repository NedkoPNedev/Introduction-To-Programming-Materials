#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE][MAX_SIZE], n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];


    for(int i=n-1;i>=1-n;i--)
    {
        int startCol = 0, endCol = n-1 - i;
        if(i<0)
        {
            startCol = -i;
            endCol = n-1;
        }
        //cout<<startCol<<" "<<endCol<<endl;
        for(int j = startCol;j<=endCol;j++)
        {
            cout<<arr[i+j][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



