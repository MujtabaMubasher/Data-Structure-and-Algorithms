#include <iostream>
using namespace std;

// Peak Index in a Mountain Array

int peakElement(int arr[], int n)

{
    int start = 0, end = n - 1;
   
    while (start <= end)
    {
         int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid - 1])
        {
            end = mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
    }
}

/*int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 0, end = arr.size() - 1;
        int mid = start + (end - start) / 2;
      while (start < end)
        {
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return mid;
    }*/

int main()
{
    int arr1[] = {2,5,9,12,11,10,7,5,3,2,1,0};
    int arr2[] = {0,1,0};
    int arr3[] = {0,2,1,0};
    int arr4[] = {0,10,5,2};
    int element = peakElement(arr4,4);
    cout << "Peak Element in Array is "<< element << "\n"; 
}

//https://leetcode.com/problems/peak-index-in-a-mountain-array/description/