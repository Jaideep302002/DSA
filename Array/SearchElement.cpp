#include <iostream>
using namespace std;

bool searchElement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;

    if (searchElement(arr, size, element))
    {
        cout << "Element found in the array." << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}