#include <iostream>
using namespace std;

//Aggressive Cows
bool isPossible(int arr[], int mid, int stalls, int k){
    int cowCount = 1;
    int lastPosition = arr[0];
    for (int i = 1; i < stalls; i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            cowCount++;
            if (cowCount == k)
              {
                 return true;
            
              }
            lastPosition = arr[i];
        }
        
    }
    return false;
}
void sortArray(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int aggressiveCow(int arr[], int stalls, int k){
   sortArray(arr,stalls);
   int start = 0;
   int end = arr[stalls - 1] - arr[0] ;
   int ans = 0;
   while (start <= end)
   {
       int mid = start + (end - start) / 2;
       if (isPossible(arr, mid, stalls, k))
       {
           ans = mid;
           start = mid + 1;
       }
       else
       {
           end = mid - 1;
       }
   }
   return ans;
}

int main(){
   int arr1[5] = {4,2,1,3,6};
   int arr2[6] = {0,3,4,7,10,9};
  int ans = aggressiveCow(arr2,6,4);
  cout<< ans<<"\n";
}

//https://www.naukri.com/code360/problems/aggressive-cows_1082559

/*

Problem statement
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.

You are also given an integer 'k' which denotes the number of aggressive cows.

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.

Print the maximum possible minimum distance.

Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.

************************************************
Sample Input 1 :

6 4
0 3 4 7 10 9


Sample Output 1 :
3


Explanation to Sample Input 1 :
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.


Sample Input 2 :
5 2
4 2 1 3 6


Sample Output 2 :
5


Expected time complexity:
Can you solve this in O(n * log(n)) time complexity?


Constraints :
2 <= 'n' <= 10 ^ 5
2 <= 'k' <= n
0 <= 'arr[i]' <= 10 ^ 9
Time Limit: 1 sec.
*/