#include <iostream>
using namespace std;

// nCr = n!/r!(n-r)!


long long int factorial(int n)
{
  long long int fact = 1;
  while (n > 0)
  {
    fact *= n;
    n--;
  }
  return fact;
}

int nCr(int n, int r)
{
  long long int numerator = factorial(n);
  long long int denominator = factorial(r) * factorial((n - r));
  // cout << numerator << "   " << denominator;
  return numerator / denominator;
}
int main()
{
  int n,r;
  cout<< "Enter the values of n & r : ";
  cin >> n >> r;
  cout<<"Answere is: "<<nCr(n,r);
}