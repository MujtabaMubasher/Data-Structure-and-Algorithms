#include <iostream>
using namespace std;
/*
 Problem Statement:
  Write a function that takes the positive integer and returns the number of 1 bits it has
 Exmaple:
 Input: n = 11
 Output: = 3

 Explanantion:
  The input binary string 1011 has a total of three 1 bits.

 Exmaple:
 Input: n = 2147483645
 Output: = 3

 Explanantion:
  The input binary string 1111111111111111111111111111101 has a total of thirty 1 bits.
*/

int numberOf1Bits(int num)
{
    int count = 0;
    while (num != 0)
    {
        int bit = (num & 1);
        if (bit)
        {
            count ++;
        }
        num = num >> 1;
    }

    return count;
}
int main()
{

    int num, bitsCount;
    cout << "Enter the Positive Number: ";
    cin >> num;
    bitsCount = numberOf1Bits(num);
    cout << "Numbers of '1' bits is: " << bitsCount << "\n";
}