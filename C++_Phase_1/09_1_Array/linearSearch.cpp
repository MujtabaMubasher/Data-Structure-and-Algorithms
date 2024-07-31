#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[15] = {2, 5, 6, 9, 8, 9, 12, 3, 5, 6, 8, 15, 65, 20, 80};
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    if (linearSearch(arr, 15, key))
    {
        cout << key << " is Present in the array\n";
    }
    else
    {
        cout << key << " is not Present in the array\n";
    }
}