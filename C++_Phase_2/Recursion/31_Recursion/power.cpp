#include <iostream>
using namespace std;

long long power(int m , int n){
   
   // Base Codition
   if(n==0)
    return 1;
   long long smallerProblem = power(m , n-1);
   long long bigProblem = m * smallerProblem;
   return bigProblem;

          // OR
   //return m * power(m, n-1);
}

int main(){
  int n , m;
  cout << "Enter the value of m^n: ";
  cin >> m >> n;
  cout << power(m , n)<<"\n";

}

// https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/118522/offering/1380913

/*Power() => 2^n

  2^4 =  2*2*2*2
  2^4 = 2*2^3
  2^4 = 2*2^n-1

  Recursive Relation => f(n) = 2*f(n-1) 
                         Big       smaller
                            Problem     problem
                                            2^4 = 2 * 2^3
                                            2^3 = 2 * 2^2
                                            2^2 = 2 * 2^1
                                            2^1 = 2 * 2^0
                                            2^0 = 1 => Base
                                                Condition

*/