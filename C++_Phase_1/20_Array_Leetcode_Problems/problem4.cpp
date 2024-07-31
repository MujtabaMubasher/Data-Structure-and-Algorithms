#include <iostream>
#include <vector>
using namespace std;


// Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> nums3;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                nums3.push_back(nums1[i++]);
            } else {
                nums3.push_back(nums2[j++]);
            }
        }
        while (i < m || j < n) {
           if(i<m){
             nums3.push_back(nums1[i++]);
           }else{
              nums3.push_back(nums2[j++]);
           }
        }
        // Copy the merged result back to nums1
        nums1 = nums3;
    }
}; 

class Solution {
public:
   void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;

        // Start from the end of both arrays and merge them into nums1
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them into nums1
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
}; 

// https://leetcode.com/problems/merge-sorted-array/submissions/1227034724/


