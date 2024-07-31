#include <iostream>
using namespace std;

//Allocate Books
bool isPossibleSolution(int arr[], int n, int mid, int m)
{
    int studentCount = 1, pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {  
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];
        }   
     }
    return true;
}
int allocateBookPages(int arr[], int n, int m){
    if (m > n)
       return -1;
    int start = 0, end = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }
    //cout << end << "\n";
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(arr, n, mid, m))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
   int arr[] = {12,34,67,90};
   int arr2[] = {2,8,8,4,5};
   int ans = allocateBookPages(arr2,5,6);
   cout << "Answere is: "<< ans<<"\n";
}

//https://www.naukri.com/code360/problems/allocate-books_1090540

/*

Problem statement
Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.

There are ‘m’ number of students, and the task is to allocate all the books to the students.

Allocate books in such a way that:

1. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.

If the allocation of books is not possible, return -1.

Example:
Input: ‘n’ = 4 ‘m’ = 2 
‘arr’ = [12, 34, 67, 90]

Output: 113

Explanation: All possible ways to allocate the ‘4’ books to '2' students are:

12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

We are getting the minimum in the last case.

Hence answer is ‘113’.

*/