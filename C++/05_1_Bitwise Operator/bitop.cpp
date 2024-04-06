#include <iostream>
using namespace std;
 
 /*
  There are 4 types of bitwise Operator 
  1: AND (&) 2: OR (|) 3: NOT (~) 4: XOR (^)
  
 */

int main(){
     int A = 5, B = 7;

     cout << "A&B: " << (A & 1) << endl;
     cout << "A|B: " << (A | B) << endl;
     cout << "~A: " << (~A) << endl;
     cout << "A^B: " << (A ^ B) << endl;
}