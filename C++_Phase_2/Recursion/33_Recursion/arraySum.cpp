#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    //cout << "\nSize is " << size << "\n";
}
// My Approach
int arraySum(int *arr, int size, int &sum){
   // print(arr, size);
   // Base Condition
   if(size == 0)
    { 
        return sum;
    }else{
       
        sum = sum + arr[0];
        //cout << "Sum is " << sum << "\n";
        return arraySum(arr + 1, size - 1, sum);
    }
   
}

// Love Approach
int getSum(int *arr, int size) {

    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }

    int remainingPart = getSum(arr+1, size-1);
    cout << arr[0] << " + "<< remainingPart<<"\n";
    int sum = arr[0] + remainingPart;
    return sum;
}


int main(){
 int arr[16] = {1,4,5,6,8,9,10,45,64,70,8,0,90,52,63,67};
 int arr2[5] = {2,4,9,9,9};
 int size = 16;
 int sum = 0;
 cout << "Array Sum is " << getSum(arr2, 5) << "\n";
}