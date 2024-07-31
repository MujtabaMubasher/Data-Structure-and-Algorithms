#include <iostream>
using namespace std;

// First and Last Position of an Element In Sorted Array

int firstOccurence(int arr[], int n, int key)

{
    int start = 0;
    int end = n - 1;
    int _1stOccurence = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            _1stOccurence = mid;
            end = mid - 1; // Correct
            //end = end - 1;
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
    return _1stOccurence;
}

int lastOccurence(int arr[], int n, int key)

{
    int start = 0;
    int end = n - 1;
    int lstOccurence = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            lstOccurence = mid;
            start = mid + 1; // Correct
           // start = start + 1;
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
    return lstOccurence;
}

int main(){
  int arr[] = {0,0,1,1,2,2,2,2};
  int key;
  cout << "Enter the key ";
  cin >> key;
  int _1stOccurence = firstOccurence(arr,8,key);
  int lstOccurence = lastOccurence(arr,8,key);

  if (_1stOccurence != -1 && lstOccurence !=1)
  {
    cout << "First Occurence of " << key << " is at index " << _1stOccurence << "\n";
    cout << "First Occurence of " << key << " is at index " << lstOccurence << "\n";
  }else{
    cout << _1stOccurence<<" "<<lstOccurence << "\n";
  }
  
}

//https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

/*

Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.

Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.

Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1

Output: 1 2

Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.


Sample Input 1:
8 2
0 0 1 1 2 2 2 2


Sample output 1:
4 7


Explanation of Sample output 1:
For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.


Sample Input 2:
4 2
1 3 3 5


Sample output 2:
-1 -1


Expected Time Complexity:
Try to do this in O(log(n)).


Constraints:
1 <= n <= 10^5
0 <= k <= 10^9
0 <= arr[i] <= 10^9

Time Limit : 1 second

*/