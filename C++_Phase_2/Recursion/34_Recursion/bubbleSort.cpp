#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    
    // base Condition
    if(n == 0 || n == 1)
     return;
    
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
        swap(arr[i],arr[i+1]);
        }
    
    }
    
    bubbleSort(arr,n-1);
    
}

 void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
 }
int main() {
    int arr[6] = {15,7,20,16,6,8};
    
    bubbleSort(arr , 6);
    print(arr,6);
    return 0;
}