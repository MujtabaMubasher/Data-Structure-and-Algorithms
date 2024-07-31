#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
 int size;
 cout<< "Enter the size of Array: ";
 cin >> size;
 int arr[size];
 cout << "Enter the Elements in the array: \n";
 for (int i = 0; i < size; i++)
 {
    cin >> arr[i];
 }
 int sum = sumArray(arr, size);
 cout << "Sum of All Elements in Array is: "<< sum <<"\n";
}