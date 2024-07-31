#include <iostream>
using namespace std;
// Function Call by Value
 
 // Function Signature
void dummy(int n){
    // function Defination
    n++;
  cout << n <<"\n";
}

int main(){
    int n = 21;
    // Function Calling 
    dummy(n);
    cout<< n << "\n";
}