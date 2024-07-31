#include <iostream>
using namespace std;

void update1(int **ptr){
   // ptr = ptr + 1; // Changes Done - No
   //*ptr = *ptr + 1; // Changes Done - yes
   **ptr = **ptr + 1; // Changes Done - yes
}

void update2(int *ptr){
     *ptr = (*ptr) * 2; 
}

void increment(int **ptr)
{
    cout << *ptr << "\n";
    ++(**ptr);
}
int main(){
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    cout << i << "\n";
    cout << *ptr1 << "\n";
    cout << **ptr2 << "\n";
    
    cout << "*********************\n";

    cout << &i << "\n";
    cout << ptr1 << "\n";
    cout << ptr2 << "\n";

    cout << "*********************\n";
    
    cout << &ptr1 << "\n";
    cout << ptr2 << "\n";
    cout << *ptr2 << "\n";

    cout << "*********************\n";

    cout << "Before i: " << i << "\n";
    cout << "Before ptr1: " << ptr1 << "\n";
    cout << "Before ptr2: " << ptr2 << "\n";
    update1(ptr2);
    cout << "After i: " << i << "\n";
    cout << "After ptr1: " << ptr1 << "\n";
    cout << "After ptr2: " << ptr2 << "\n";

    
    cout << "*********************\n";

    cout << "Before i: " << i << "\n";
    cout << "Before ptr1: " << ptr1 << "\n";
    cout << "Before ptr2: " << ptr2 << "\n";
    update2(ptr1);
    cout << "After i: " << i << "\n";
    cout << "After ptr1: " << ptr1 << "\n";
    cout << "After ptr2: " << ptr2 << "\n";

    cout << "*********************\n";

    int num = 110;
    int *ptr = &num;
    cout<< ptr << "\n";
    increment(&ptr);
    cout << num << "\n";


}