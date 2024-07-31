#include <iostream>
using namespace std;


int main(){
   int arr[10] = {23, 122, 41, 67};
   cout << "Address of first Memory Block is: " << arr << "\n";
   cout << arr[0] << "\n";
   cout << "Address of first Memory Block is: " << &arr[0] << "\n";
   cout << "4th: " << *arr << "\n";
   cout << "5th: " << *arr + 1 << "\n";
   cout << "6th: " << *(arr + 1) << "\n";
   cout << "7th: " << *(arr) + 1 << "\n"; // Increment
   cout << "8th: " << arr[2] << "\n";
   cout << "9th: " << *(arr + 2) << "\n";

   int i = 3;
   cout << i[arr] << "\n";
   /*
      Formula  => arr[i] = *(arr + i)
                         OR
                   i[arr] = *(i + arr)
   */

   cout << "*********************\n";

   int temp[10] = {1, 2};
   cout << "1st: " << sizeof(*temp) << "\n";
   cout << "2nd: " << sizeof(&temp) << "\n";

   cout << "*********************\n";

   int *ptr = &temp[0];
   cout << ptr << "\n";
   cout << sizeof(ptr) << "\n";
   cout << *ptr << "\n";
   cout << sizeof(*ptr) << "\n";
   cout << &ptr << "\n";
   cout << sizeof(&ptr) << "\n";

   cout << "*********************\n";

   int arr1[20] = {1, 2, 3, 5};
   cout << "-> " << &arr1[0] << "\n";
   cout << "-> " << &arr1 << "\n";
   cout << "-> " << arr1 << "\n";

   cout << "*********************\n";

   int *ptr1 = &arr1[0];

   cout << "-> " << ptr1 << "\n";
   cout << "-> " << *ptr1 << "\n";
   cout << "-> " << &ptr1 << "\n";

   cout << "*********************\n";

   int arr2[10] = {56, 8, 41, 90, 50};

   // Error
   // arr = arr + 1;

   int *ptr2 = &arr2[0];

   cout << "-> " << ptr2 << "\n";
   ptr2 = ptr2 + 1;
   cout << "-> " << ptr2 << "\n";
}