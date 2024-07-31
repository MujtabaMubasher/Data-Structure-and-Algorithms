#include <iostream>
using namespace std;

void print(int *p){
  cout << *p << "\n";
}

void update(int *p){
     // Changes in the Memory Address
  // cout << "Inside: Before -> " << p << "\n";  
  // p = p + 1;
  // cout << "Inside: After -> " << p << "\n";
  
  // Changes in the Value at the Memory Address
  *p = *p + 1;
}

int getSum(int *arr, int size)
{
   // Size of Memory Address
  cout << endl << "Size : " << sizeof(arr) << endl;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  return sum;
}

int main(){
   int value = 5;
   int *ptr = &value;
   print(ptr);
   cout << "Before: " <<  *ptr << "\n";
   update(ptr);
   cout << "After: "<< *ptr << "\n";

   cout << "*********************\n";

   int arr[8] = {1,2,3,5,4,6,9,7};
   cout << "The sum is " << getSum(arr + 3, 5) << "\n"; 
}