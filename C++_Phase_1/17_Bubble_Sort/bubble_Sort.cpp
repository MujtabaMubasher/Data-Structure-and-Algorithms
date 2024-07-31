#include <iostream>
using namespace std;

// Bubble Sort
// Note: What is stable and unstable Algorithm
// whats is In place Sort

/*void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - 1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}*/
 
// Optimized Approach

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }

        // Already Sorted
        if (isSwapped == false)
            break;
    }
}

void printArray(int arr[], int n, string com ){
    cout<< "\n****"<< com << "****\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }    
}

int main(){

    int arr1[] = {6,2,8,4,10};
    int arr2[] = {10,1,7,6,14,9};
    int size = sizeof(arr2)/sizeof(arr2[0]);
    printArray(arr2,size,"Original Array");
    bubbleSort(arr2,size);
    printArray(arr2,size,"Sorted Array");
    
}

// https://www.naukri.com/code360/problems/bubble-sort_980524


/*

Problem statement
Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.

For Example:
Bubble Sort implementation for the given array:  {6,2,8,4,10} is shown below :-


Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 1000

Where 'T' represents the number of test cases, 'N' represents the size of the array, and Arr[i] represents the elements of the array.
Time Limit: 1 sec.


******************************************
Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10
Sample Input 2:
2
2
1 2
4
4 3 2 1
Sample Output 2:
1 2
1 2 3 4
Javascript (node v10.20.0)
1


*/