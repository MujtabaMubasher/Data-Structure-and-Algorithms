#include <iostream>
#include <math.h>
using namespace std;

 int main(){
    
    int num;
    cout<< "Enter the number: ";
    cin>>num;
    int bit, answere = 0, i = 0;
    while (num !=0)
    {
         bit = num & 1;
         num =  num >> 1 ;
         cout<<bit<<"\n";
         answere = (bit * pow(10 , i) + answere ); 
         i++;
    }

    cout<< "**************\n";
    cout<<answere<<"\n";
    

 }