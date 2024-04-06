#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long int binary_num, digit;
    int decimal = 0, i=0 ;
    cout<< "Enter the Binary Number: ";
    cin>> binary_num;

    while (binary_num != 0)
    {
        digit = binary_num % 10;
        if (digit == 1)
        {
            decimal = pow(2, i) + decimal;
        }
        binary_num = binary_num / 10 ;
        cout<<"Binary: "<< binary_num<<"\n";
        i++;
    }

    cout<< "Decimal Number is: "<<decimal<<"\n";
}