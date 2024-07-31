#include <iostream>
using namespace std;

 void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
 }
 void swapAlternate(int arr[], int size){
  
    for (int i = 0, j = 1 ; j < size ; i+=2,j+=2)
    {
        swap(arr[i], arr[j]);

    }
  
 }
 void printArray(int arr[] ,int size){
     for (int i = 0; i < size; i++)
     {
        cout << arr[i] << " ";
     }
     cout << "\n";
 }
int main()
{
   int arr[] = {1, 2, 3, 5, 9, 8, 7};
   int size = sizeof(arr)/sizeof(arr[0]);
   swapAlternate(arr, size);
   printArray(arr, size);
}