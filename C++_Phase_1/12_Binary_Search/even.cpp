#include <iostream>
using namespace std;

int evenBinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}
int main(){

    int arr[6] = {1,3,3,6,7,10};
    int key;
    cout << "Enter the key: ";
    cin >> key;
    cout << "Your Key " << key<< " present at the index "<< evenBinarySearch(arr,6,key); 

}