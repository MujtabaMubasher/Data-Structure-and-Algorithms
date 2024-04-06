#include <iostream>
using namespace std;

 /*
   Print Sum of Fabonacci Series

   0 1 1 2 3 5 8 13 21 ......
 
 */
 int main(){
   
   int n, a=0, b=1, sum = 0;
   cout << "Enter the Value of n: ";
   cin>>n;
   cout<< a<<" "<< b<<" ";
   for (int i = 1; i <= n; i++)
   {
      sum= a+b;
      cout<< sum<<" ";
      a=b;
      b=sum;
   }
   


 }