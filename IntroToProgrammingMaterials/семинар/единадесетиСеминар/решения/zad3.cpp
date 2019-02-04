#include <iostream>

using namespace std;

bool contains(int *arr, int len, int val)
{
    if (len < 0) return false;
    return (arr[len] == val) || contains(arr, len - 1, val);
}

int main()
{
    int arr[10] = {2, 5, 8, 3, 1, 4, 9, 6, 7};
    (contains(arr, 9, 9) == true) ? cout << "Yes.\n" : cout << "No.\n";
    return 0;
}
