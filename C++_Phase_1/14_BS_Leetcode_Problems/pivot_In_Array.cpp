#include <iostream>
using namespace std;

//Pivot in an Array

int pivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s)/2;
        if (arr[mid] >= arr[0])
        {
            s =  mid + 1;
        }
        else if(arr[mid] < arr[n-1])
        {
            e = mid;
        }
    }
    return s;

}
int main(){
  int arr1[] = {7,8,9,1,3,5};
  int arr2[] = {7,9,11,1,2,3};
  int arr3[] = {3,8,10,17,1};
  int arr4[] = {3,7,9,1,2};
  int arr5[] = {16,18,22,23,36,3,6,7,9,14};
  int arr6[] = {7, 8, 9, 10, 0, 1, 2, 5, 6};
  int pivotIndex = pivot(arr6,9);
  cout << "Pivot Element Index is "<< pivotIndex << "\n";
}