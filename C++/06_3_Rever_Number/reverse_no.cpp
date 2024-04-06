#include <iostream>
using namespace std;

int reverseInteger(int num){
    
    int reverseNo = 0;
    while (num!=0)
    {
       int digit = num %10;
       reverseNo = (reverseNo * 10) + digit ;
       num = num /10;        
    }

    return reverseNo;
    
}
int main()
{
    int num, reverseNo;
    cout<<"Enter the Number: ";
    cin>> num;
    reverseNo = reverseInteger(num);
    cout<<"Original Number: "<<num<<"\n";
    cout<<"Reverse Number: "<<reverseNo<<"\n";
}