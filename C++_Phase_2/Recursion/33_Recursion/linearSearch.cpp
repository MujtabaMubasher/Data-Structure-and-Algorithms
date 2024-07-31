#include <iostream>
#include <vector>
using namespace std;

// My Approach
bool linearSearch(vector<int> arr, int key){
    
    // Base Condition
    if(arr.size() == 0)
     return false;
    
    if(arr[0] == key)
      return true;
    
 return linearSearch(vector<int>(arr.begin() + 1, arr.end()), key);
}

//Love Approach
bool linearSearch2(int arr[], int size, int k ) {
    //print(arr,size);
    //base case
    if(size == 0) 
        return false;

    if(arr[0] == k) {
        return true;
    }
    else {
      //  bool remainingPart = linearSearch(arr+1, size-1, k );
       // return remainingPart;
    }
}


int main(){
   vector<int> arr = {1,4,5,6,8,9,10,45,64,70,8,0,90,52,63,67};

   int key;

   cout << "Enter the Key ";
   cin >> key;

   if(linearSearch(arr,key)){
     cout << "Key is Present \n";
   }else{
     cout << "Key not Present \n";
   }
    

}