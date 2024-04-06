#include <iostream>
using namespace std;
/*
  Left Shift << AND Right Shift >>
  Note: In left Shift we multiply numbert with 2 && in Right Shift Devid by 2 
  5<<2 = 20 OR 101<<2 -> 00000....00101<<2
                        = 0000....10100 = 20

  10<<1 = 20
  30<<3 = 240
  50>>1 = 25 OR 110010>>1 -> 00000....0000000110010>>1
                          = 000000....0000000 011001
  For example, if you have the binary number "110010" and you perform a right shift by 1 position, the result would be "011001". Each bit is shifted one position to the right, and the leftmost bit is replaced with a zero.
  26>>2 = 6 
  25>>2= 6

*/
int main(){
    cout<< "           Left Shift \n";
    cout<< "Left Shift 5 << 2: "<< (5 << 2) <<endl;
    cout<< "Left Shift 10 << 1: "<< (10 << 1) <<endl;
    cout<< "Left Shift 30 << 3: "<< (30 << 3) <<endl;
    
    cout<< "           Right Shift \n";

    cout<< "Right Shift 50 >> 1: "<< (50 >> 1) <<endl;
    cout<< "Right Shift 26 >> 2: "<< (26 >> 2) <<endl;
    cout<< "Right Shift 25 >> 2: "<< (25 >> 2) <<endl;
    cout<< "Right Shift 100 >> 2: "<< (100 >> 2) <<endl;


}