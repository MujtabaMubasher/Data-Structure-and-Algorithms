#include <iostream>
using namespace std;

//  Find pivot in an Array
int getPivot(int arr[], int n)
{
    int start = 0;
    int end  = n - 1;
    
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >=  arr[0])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int BinarySearch(int arr[], int key, int start, int end)
{
   
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

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
    }
    return -1; 
}

//Search In Rotated Sorted Array

int findPosition(int arr[], int n, int k)
{
    int pivotIndex = getPivot(arr, n);
    if (k >= arr[0] && k <= arr[pivotIndex - 1])
    {
       return BinarySearch(arr, k, 0, pivotIndex-1);
       /* int start = 0;
        int end = pivotIndex - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] ==  k)
            {
                return mid;
            }
            else if( arr[mid] < k)
            {
                start = mid + 1;
            }
            else{

               end = mid - 1;
            }
        }*/  
    }
    else
    {
        return BinarySearch(arr, k, pivotIndex, n-1);
       /* int start = pivotIndex;
        int end = n - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k)
            {
                return mid;
            }
            else if (arr[mid] < k)
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;*/
    }
}

int main(){
   int arr[] = {7,8,1,3,5};
   int arr1[] = {7, 8, 9, 10, 0, 1, 2, 5, 6};
   int arr2[] = {1};
   //int pivot = getPivot(arr2,1);
   int searchIndex  = findPosition(arr2, 1, 1);
   cout<<searchIndex;
}

// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554


/*

Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.


Now the array is rotated at some pivot point unknown to you.


For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].


Now, your task is to find the index at which ‘k’ is present in 'arr'.

Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.


Example:
Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2

Output: 3

Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).

*************************

Sample Input 1:
4 3
8 9 4 5


Sample output 1:
-1 


Explanation of Sample Output 1:
For the test case, 3 is not present in the array. Hence the output will be -1.


Sample Input 2:
4 3
2 3 5 8


Sample output 2:
1


Expected Time Complexity:
Try to do this in O(log(n)). 


Constraints:
1 <= n <= 10^5
0 <= k <= 10^9
0 <= arr[i] <= 10^9

Time Limit: 1 second


*/