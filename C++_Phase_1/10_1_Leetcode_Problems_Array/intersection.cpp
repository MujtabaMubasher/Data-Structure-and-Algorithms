#include <iostream>
using namespace std;

// Intersection Of Two Sorted Arrays in non-Decreasing way

void intersection(int arr1[], int size1, int arr2[], int size2)
{   
    bool isFound = false;
    for (int i = 0; i < size1; i++)
    {
        for ( int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = -1;
                cout << arr1[i]<< " ";
                isFound = true;
                break;
            }
        }
    }
    if (!isFound)
    {
        cout<< -1;
    }
    
}
int main(){
    // Sample Input 1
   int arr1[] = {1, 2, 2, 2, 3, 4};
   int arr2[] = {2,2,3,3};
   // Sample Input 2
   int arr3[] = {3,2};
   int arr4[] = {1,2,3};
   // Sample Input 3
   int arr5[] = {1,4,5};
   int arr6[] = {3,4,5};
   // Sample Input 4
   int arr7[] = {1,1,5,6,3};
   int arr8[] = {7,8,9,11};

   int size1 = sizeof(arr7)/ sizeof(arr7[0]);
   int size2 = sizeof(arr8)/ sizeof(arr8[0]);
   intersection(arr7,size1,arr8,size2);

}

// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149

/*

Problem statement:
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.

Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec


Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  

Sample Output 1 :
2 2 3
3   

Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.

Sample Input 2 :

2
3 3 
1 4 5
3 4 5
1 1
3
6

Sample Output 2 :

4 5
-1

*/