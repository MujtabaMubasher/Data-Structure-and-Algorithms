#include <iostream>
using namespace std;

//Modular Exponentiation

int power(int x, int n){
    int result = 1;
    while (n > 0)
    {
        if (n&1)
        {
            result = result * x;
        }
       
        x = x * x;
        n = n >> 1 ;
    }
    
    return result;    
}

int modularExponentiation(int x, int n, int m) {
	int result = 1;

    while (n > 0)
    {
        if (n&1)
        {
            result = (1LL *(result) * x)%m;
        }
        x = (1LL*(x) * x)%m;
        n = n >> 1;        
    }
    return result;
}


int main() {
    cout << power(2, 10)<<"\n";
    cout<< modularExponentiation(4,3,10)<<"\n";
    return 0;
}

// https://codeforces.com/blog/entry/72527

//https://www.naukri.com/code360/problems/modular-exponentiation_1082146

/*
  Properties of Modular Arithmetic

  (a + b) % m = (a % m) + (b % m)
  (a - b) % m = (a % m) - (b % m)
  (a*b) % m   = (a % m) * (b % m)

  Case 1: 2^11  

         where x = 2 & n = 11
         ((x^n/2)^2) * x when n is Odd 

 Case 2: 2^10  

         where x = 2 & n = 10
         ((x^n/2)^2)  when n is Even  

*/