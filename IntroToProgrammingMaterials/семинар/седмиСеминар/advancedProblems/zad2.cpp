#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    int arrA[MAX_SIZE], arrB[MAX_SIZE], n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> arrA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "B[" << i << "] = ";
        cin >> arrB[i];
    }

    bool linearDependence = true;

    double coeff = arrA[0] / arrB[0];

    for (int i = 1; i < n; i++)
    {
        if (arrA[i] / arrB[i] != coeff)
        {
            linearDependence = false;
            break;
        }
    }

    (linearDependence) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}
