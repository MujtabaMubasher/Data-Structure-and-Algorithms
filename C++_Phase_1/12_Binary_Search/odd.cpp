#include <iostream>
using namespace std;

int oddBinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int keyIndex = oddBinarySearch(arr, size, key);

    if (keyIndex != -1)
    {
        cout << "Your Key " << key << " present at the index " << keyIndex << "\n";
    }
    else
    {
        cout << "Your Key is not found.\n";
    }
}