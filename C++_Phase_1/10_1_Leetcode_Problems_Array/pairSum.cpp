#include <iostream>
using namespace std;

// Pair Sum
// https://www.naukri.com/code360/problems/triplets-with-given-sum_893028 => (Rahta ha mra)
void pairSum(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                if (arr[i] <= arr[j])
                {
                    cout << "(" << arr[i] << "," << arr[j] << "),";
                }else{
                     cout << "(" << arr[j] << "," << arr[i] << "),";
                }
                
            }
        }
    }
}
int main(){
   int arr1[5] = {1,2,3,4,5};
   int arr2[5] = {2,-3,3,3,-2};
   pairSum(arr1,5,5);
}


//https://www.naukri.com/code360/problems/pair-sum_697295

/*

Problem statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

Constraints:
1 <= N <= 10^3
-10^5 <= ARR[i] <= 10^5
-2 * 10^5 <= S <= 2 * 10^5


Sample Input 1:

5 5
1 2 3 4 5

Sample Output 1:

1 4
2 3

Explaination For Sample Output 1:
Here, 1 + 4 = 5
      2 + 3 = 5

Hence the output will be, (1,4) , (2,3).

Sample Input 2:

5 0
2 -3 3 3 -2

Sample Output 2:
-3 3
-3 3
-2 2


*/