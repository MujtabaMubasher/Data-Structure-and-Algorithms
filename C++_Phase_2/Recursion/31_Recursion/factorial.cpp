#include <iostream>
using namespace std;

long long factorial(int n){
   
   // Base Condition
   // Note When We didn't Provide the base Codition then Segmentation fault Occurs
   if(n==0)
    return 1;
    
    // Recursive Relation
    //cout << n <<" ";
    long long smallerProblem = factorial(n-1);
    long long bigProblem = n * smallerProblem;
    return bigProblem;
    //  OR
   // return n * factorial(n-1);
}

int main(){
  int n;
  cout << "Enter the value: ";
  cin >> n;
  cout << factorial(n)<<"\n";
}

// https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/118522/offering/1380913

/*
  
  Factorial => 5!

  5! = 5*4*3*2*1
  5! = 5*4!
  n! = n*(n-1)!
 Recursive Relation => f(n) = n*f(n-1)
                        Big       smaller
                           Problem     problem

                                            5! = 5 * 4!
                                            4! = 4 * 3!
                                            3! = 3 * 2!
                                            2! = 2 * 1!
                                            1! = 1 * 0!
                                            0! = 1 => Base
                                                Condition


  Power() => 2^n

  2^4 =  2*2*2*2
  2^4 = 2*2^3
  2^4 = 2*2^n-1

  Recursive Relation => f(n) = 2*f(n-1) 
                         Big       smaller
                            Problem     problem


*/