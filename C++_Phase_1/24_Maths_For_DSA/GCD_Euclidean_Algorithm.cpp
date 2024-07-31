#include <iostream>
#include <algorithm>
using namespace std;

// GCD Euclidean Algorithm
//Find GCD of two numbers

// Brute Force Approach
/*int gcd(int a, int b)
{
    int ans = 0;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}*/

// Optimize Approach

/*int gcd(int a , int b){

    // if (a == 0)
    //  return b;
    // else if(b == 0)
    //  return a;
    
   while (a != b)
   {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }   
   }
   return a;
}*/

// More Optimize Approach

int gcd(int a, int b)
{

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    // Time Complexity: O(logɸmin(a,b)), where ɸ is 1.61.

    // Space Complexity: O(1).

    
}

int main(){
  int num1 , num2;
  cout << "Enter the 1st Number ";
  cin >> num1;
  cout << "Enter the 2nd Number ";
  cin >> num2;
 gcd(num1,num2);
  cout << "GDC of Given Numbers is: " << gcd(num1,num2) << "\n"; 
}

// https://www.naukri.com/code360/library/gcd-euclidean-algorithm

// https://www.naukri.com/code360/problems/hcf-and-lcm_840448

/*
  
  GCD/HCF
  
  Find GCD of 24 & 72

  Solution:
  2 : 24       2 : 72
  2 : 12       2 : 36 
  2 : 6        2 : 18 
  3 : 3        3 : 9
    : 1        3 : 3
                 : 1
    
    so,
     24 :-  2 x 2 x 2 x 3 
     72 :-  2 x 2 x 2 x 3 x 3

     So common Factors are: 2 x 2 x 2 x 3 
     GDC = 24

                 GCD Euclidean Algorithm
    
    gcd(a-b, b) = gcd(72 -24, 24)
                = gcd(48,24)
                = gcd(24, 24)
                = gcd(0,24)
                = 24

*/