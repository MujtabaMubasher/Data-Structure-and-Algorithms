#include <iostream>
#include <climits>
using namespace std;

int reverseInteger(int x)
{
   int answere = 0;
   while (x != 0)
   {
      int digit = x % 10;
       if ((answere > INT_MAX/10 ) || (answere < INT_MIN/10 ))return 0;
      answere = (answere * 10) + digit;
      x /= 10;
   }

   return answere;
}

int main(){
   int x;
   cout << "Input:  ";
   cin >> x;
   x = reverseInteger(x);
   cout << "Output: " << x << "\n";
}

/*
 Problem Statement:
  Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

 Example 1:

  Input: x = 123
  Output: 321
  Example 2:

 Example 1:

  Input: x = -123
  Output: -321
  Example 3:

 Example 1:

  Input: x = 120
  Output: 21

*/