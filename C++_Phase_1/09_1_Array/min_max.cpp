#include <iostream>
#include <limits.h>
using namespace std;
 
 int minInArray(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
 }

 int maxInArray(int arr[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
 }
 int main()
 {
     int size;
     cout << "Enter the Size of array: ";
     cin >> size;
     cout << "Enter the values in the array: \n";
     int arr[size];
     for (int i = 0; i < size; i++)
     {
         cin >> arr[i];
     }

     int max = maxInArray(arr, size);
     cout << "Maximum Element in Array is: " << max << "\n";
     int min = minInArray(arr, size);
     cout << "Minimum Element in Array is: " << min << "\n";

     cout << "*****Printing Original Array******\n";

     for (int i = 0; i < size; i++)
     {
         cout << arr[i] << " ";
     }

     cout << "\n";
 }