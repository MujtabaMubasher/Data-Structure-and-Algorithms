#include <iostream>
using namespace std;

int main(){

    // pointer to int is created, and pointing to some garbage address
    // int *p = 0;

    // cout << *p << endl;

    /*
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

  // Difference Between Passing Refrence & Value

  int num = 4;
  int a = num;
  cout << "before increment: " << num<<"\n"; 
  a++;
  cout << "after increment: " << num<<"\n"; 
  
  int *ptr = &num;
  cout << "before increment: " << num<<"\n"; 
  (*ptr)++;
  cout << "after increment: " << num<<"\n";

  // Coping Pointer
  
  int *ptr1 = ptr;
  cout<< ptr1 << " - " << ptr << "\n";
  cout<< *ptr1 << " - " << *ptr << "\n";

  // Importent Concept

  int i = 3;
  int *ptr2 = &i;
  cout << ++(*ptr2) << "\n"; 
  *ptr2 = *ptr2 + 1;
  cout << *ptr2 << "\n"; 
  
  // increment in Memory Address

  cout << "before: " << ptr2 << "\n";
  ptr2 = ptr2 + 1;
  cout << "after: " << ptr2 << "\n";

  // decrement in Memory Address

  cout << "before: " << ptr2 << "\n";
  ptr2 = ptr2 - 1;
  cout << "after: " << ptr2 << "\n";

}   