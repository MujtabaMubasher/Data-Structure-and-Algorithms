#include <iostream>
using namespace std;
 
// Find Dublicate Element in the Array

int dublicateElement(int arr[], int size)
{   int unique = 0;
    // XORing all elements in arr[i] 
    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
        // cout<< "Unique: "<< unique << "\n";
    }
    int dublicateElement = unique;
    // XOR [1, n-1]
    for (int i = 1; i < size; i++)
    {
        dublicateElement = dublicateElement ^ i;
        // cout<< "Dublicate Element: "<< dublicateElement << "\n";
    }

    return dublicateElement;
}
int main(){
    int arr1[] = {4,2,1,3,1};
    int arr2[] = {6,3,1,5,4,3,2};
    int arr3[] = {5,1,2,3,4,2};
    int arr4[] = {8,7,2,5,4,7,1,3,6};
    int size = sizeof(arr4)/sizeof(arr4[0]);
    int dublicate = dublicateElement(arr4, size);
    cout<<"Dublicate Element is: "<< dublicate << "\n";
}


// https://www.naukri.com/code360/problems/duplicate-in-array_893397

/*

Problem statement:

You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

Note :
A duplicate number is always present in the given array.

Constraints:
1 <=  T  <= 10
2 <=  N <= 10 ^ 5
1 <=  ARR[i]  <= N - 1


Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.

Time limit: 1 sec


Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation of sample input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.


Sample Input 2:
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7


Hints:
1. Simply calculate the frequency of each value.
2. Try to optimise the above approach by using an array to store the frequencies.
3. Think of a solution using Floyd’s cycle finding algorithm.
4. Try to think of a solution based on bitwise XOR.

*/