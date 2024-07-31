#include <iostream>
using namespace std;

// Merge Sorted Array

void mergeSortedArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
          arr3[k++] = arr2[j++];
           
        }
    }
    while (i < n || j < m)
    {
        if (i < n)
        {
            
            arr3[k++] = arr1[i++];
            
        }
        else
        {
            
            arr3[k++] = arr2[j++];
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
  int arr1[5] = {1,3,5,7,9};
  int arr2[7] = {2,4,6,8,10,11,12};
  int arr4[6] = {1,2,3,0,0,0};
  int arr5[3] = {2,5,6};
  int arr3[12];
  mergeSortedArray(arr1,5,arr2,7,arr3);
  int size = sizeof(arr3)/sizeof(arr3[0]);
  print(arr3,size);
}