#include <iostream>

using namespace std;

int pow(int a, int num)
{
    int product = 1;
    for (int i = 0; i < num; i++)
    {
        product = product * a;
    }
    return product;
}

int main()
{
    const int SIZE = 100;
    int arr1[SIZE], arr2[SIZE], size1, size2;
    cout << "Enter the size of array one: ";
    cin >> size1;
    cout << "Enter the elements of array one: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of array two: ";
    cin >> size2;
    cout << "Enter the elements of array two: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

      /// a)
    cout << "Common elements: ";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl << endl;

      /// á)
    cout << "Diffrent elements of array one which are not divisable by 17: ";
    bool differ = false;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] != arr2[j])
            {
                differ = true;
            }
            else
            {
                differ = false;
                break;
            }
        }
        if (differ)
        {
            if (arr1[i] % 17 != 0)
            {
                cout << arr1[i] << " ";
            }
        }
        differ = false;
    }
    cout << endl << endl;

    /// â)
    cout << "Numbers of Armstrong from array one: ";
    for (int i = 0; i < size1; i++)
    {
        int sum = 0;
        int currNum = arr1[i];
        while (currNum != 0)
        {
            int currDigit = currNum % 10;
            sum += pow(currDigit, 3);
            currNum /= 10;
        }
        if (sum == arr1[i])
        {
            cout << arr1[i] << " ";
        }
    }
    cout << endl << endl;
    return 0;
}
