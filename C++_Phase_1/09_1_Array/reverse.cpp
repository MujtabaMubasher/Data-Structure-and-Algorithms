#include <iostream>
using namespace std;

// Reverse an array from starting and Ending Index
void swap(int &a, int &b){
     int temp = a;
     a = b;
     b = temp; 
}
int reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
   
   while (start < end)
   {
     swap(arr[start] , arr[end]); 
     start++;
     end--; 
   }
}

void printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\n";

}

int main()
{
   int arr[] = {9, 1, 12, 5, 23, 64, 10, 14, 78, 5};
   int arr1[7] = {9, 1, 12, 23, 64, 10, 14};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<< "**********Even Array************\n";
   reverseArray(arr, size);
   printingArray(arr, size);
   cout<< "**********Odd Array************\n";
   reverseArray(arr1, 7);
   printingArray(arr1, 7);
  //cout<< size<< "\n";
}