#include <iostream>
using namespace std;
//Find Pivot Index

/*int pivotIndex(int arr[], int n) {
    for (int pivot = 0; pivot < n; pivot++) {
        int leftSum = 0, rightSum = 0;

        // Calculate sum of elements on the left of pivot
        for (int i = 0; i < pivot; ++i) {
            leftSum += arr[i];
        }
        cout << "L_Sum = "<< leftSum << "\n";

        // Calculate sum of elements on the right of pivot
        for (int j = pivot + 1; j < n; ++j) {
            rightSum += arr[j];
        }
        cout << "R_Sum = "<< rightSum << "\n";
        // If left sum equals right sum, return pivot index
        if (leftSum == rightSum) {
            return pivot;
        }
        cout<< "Pivot = "<<  pivot << "\n";
    }
    // If no pivot index is found, return -1
    return -1;
}*/

int pivotIndex(int arr[], int n){
    int total_sum = 0;
    for (int i = 0 ; i < n; i++)
    {
        total_sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (left_sum == total_sum - left_sum - arr[i])
        {
            return i;
        }
        left_sum += arr[i];
    }

    return -1;
}

int main(){
 int arr1[] = {1,7,3,6,5,6};
 int arr2[] = {1,2,3};
 int arr3[] = {2,1,-1};
 int pivot = pivotIndex(arr1,6);
 if (pivot != -1)
 {
    cout << "Pivot Index in Array is "<< pivot <<"\n"; 
 }else{
    cout << pivot << "\n";
 }
 
}

//https://leetcode.com/problems/find-pivot-index/description/





