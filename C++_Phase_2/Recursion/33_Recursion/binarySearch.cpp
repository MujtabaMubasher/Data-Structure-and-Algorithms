#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start,int end, int key){ 
   // Base COndition
   if(start > end)
      return false;
   int mid = start + (end - start) /2;
    if(arr[mid] == key)
     return true;

    if(arr[mid] < key ){
        return binarySearch(arr,mid + 1,end, key);
    }else{
        return binarySearch(arr,start, end - 1, key);
    }

}

int main(){
  int arr[16] = {1,4,5,6,8,9,10,45,64,70,80,90,100,163,167};
  int size = 16;
  int key;

   cout << "Enter the Key ";
   cin >> key;

   if(binarySearch(arr,0,size-1,key)){
     cout << "Key is Present \n";
   }else{
     cout << "Key not Present \n";
   }
}

// https://www.naukri.com/code360/problems/binary-search_972