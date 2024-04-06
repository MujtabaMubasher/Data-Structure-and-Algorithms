#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number: ";
    cin >> num;
    int remainder;
    int quotient, i = 0, binary = 0;

     while (num!=0)
     {
         remainder = num % 2;
         quotient = num /2;
         num = quotient;
         binary = (remainder * pow(10, i) + binary );
         i++;
         cout<< remainder<<"\n";
        //  cout<< quotient<<"\n";
        //  cout<< answere<<"\n";
     }
     
     cout<< binary<<"\n";
}