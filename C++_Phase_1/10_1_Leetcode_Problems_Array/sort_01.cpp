#include <iostream>
using namespace std;

void sort_01(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0 && arr[j] == 1)
        {
            i++, j--;
        }
        else if (arr[i] == 1 && arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 0 && arr[j] == 0)
        {
            i++;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }
}
void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    
}
int main(){
    int arr1[9] = {0,1,1,0,1,1,0,1,1};
    int arr2[6] = {0,1,0,1,1,0};
    int arr3[27] = {1,1,1,0,0,1,1,0,1,0,0,1,1,1,0,1,0,1,1,0,1,0,1,0,0,0,0};

    sort_01(arr3,27);
    printArray(arr3,27);
}