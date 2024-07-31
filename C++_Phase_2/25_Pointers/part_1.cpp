#include <iostream>
using namespace std;

int main(){

    int num = 5;
    cout << num << "\n" ;
    // Address of Operator
    cout << "Memory Address of num is "<< &num<<"\n"; 
    
    // "*" Devalue Operator
    
    int *ptr1 = &num;
    cout << "Address of ptr1 is "<< ptr1 <<"\n";
    cout << "Value at ptr1 is "<< *ptr1 <<"\n";

    double d = 4.3;
    double *ptr2 = &d;

    cout << "Address of ptr2 is "<< ptr2 <<"\n";
    cout << "Value at ptr2 is "<< *ptr2 <<"\n";

    cout << "Size of Integer: "<< sizeof(num)<<"\n";
    cout << "Size of ptr1: "<< sizeof(ptr1)<<"\n";
    cout << "Size of ptr2: "<< sizeof(ptr2)<<"\n";

    return 0;
}