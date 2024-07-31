#include <iostream>
#include <vector>
using namespace std;

// Rotate Array

/*void rotateArray(vector<int> &nums, int k)
{
  for (int i = 1; i <= k; i++)
  {
    int temp = nums[nums.size() - 1];
    int j = nums.size() - 1;
    while (j > 0)
    {
      nums[j] = nums[j - 1];
      j--;
    }
    nums[j] = temp;
    //cout << "\n"<< temp << "\n";
  }
}*/

// Optimized Approach

void rotateArray(vector<int> &nums, int k){
  vector<int> temp(nums.size());
  for (int i = 0; i < nums.size(); i++)
  {
     /*
       number % n => 0 ---- n -1
       45 % 10 == 3 => 0 ------- 9 
     */
    temp[(i + k) % nums.size()] = nums[i]; 
  }
  nums = temp;
}

void print(vector<int>&nums, string com ){
  cout<< "\n*** " << com << "***\n";
  for (int i = 0; i < nums.size(); i++)
  {
    cout<< nums[i] << " ";
  }
   
}

int main(){
  vector<int> nums = {1,2,3,4,5,6,7};
  int k = 3;
  print(nums,"Original Array");
  rotateArray(nums,k);
  print(nums,"Rotated Array");
}


// https://leetcode.com/problems/rotate-array/description/


/*

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

*/