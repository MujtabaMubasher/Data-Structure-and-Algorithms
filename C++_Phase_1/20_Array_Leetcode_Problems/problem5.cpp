#include <iostream>
#include <vector>
using namespace std;

// Move Zeroes

/*void moveZeroes(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
        
    }
    
}*/
/*void print(int arr[],int n, string com){
    cout<< "\n*** "<<com<<" ***\n";
    for (int i = 0; i <n; i++) 
    {
        cout<< arr[i]<<" ";
    }
     
}*/

void moveZeroes(vector<int>&nums){
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
        
    }
}
void print(vector<int>nums, string com){
    cout<< "\n*** "<<com<<" ***\n";
    for (int i = 0; i <nums.size(); i++) 
    {
        cout<< nums[i]<<" ";
    }
     
}
int main(){
    vector<int> nums = {0,1,0,3,12};
   // int arr[5] = {0,1,0,3,12};
    vector<int> nums1 = {2,0,1,3,0,0,5,6,0,0,0};
    print(nums1,"Before");
    moveZeroes(nums1);
    print(nums1,"After");

}

// https://leetcode.com/problems/move-zeroes/description/