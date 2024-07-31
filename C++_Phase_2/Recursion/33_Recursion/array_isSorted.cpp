#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr){
     
    // Base Case
    if(arr.size() == 1 || arr.size() == 0)
     return true;
   if(arr[0] > arr[1])
     return false;

   return isSorted(vector<int> (arr.begin() + 1, arr.end()));
 
}
int main(){
    vector<int> arr = {1,4,5,6,8,9,10};
    if(isSorted(arr)){
        cout << "Sorted\n";
    }else{
        cout << "Not Sorted\n";
    }

}