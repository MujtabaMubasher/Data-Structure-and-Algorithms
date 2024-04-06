#include <iostream>
using namespace std;
/*
 Problem Statement:
  Given an Integer number n, return the difference between the product of its digit and the sum of its digits
 Exmaple:
 Input: n = 234
 Output: = 15

 Explanantion:
  Product of its digits = 2 * 3 * 4 = 24
  sum of its digit =  2 + 3 + 4 = 9
  Result: 24 - 9 = 15

*/
int substructProductAndSum(int num)
{
    int answere, digit, product = 1, sum = 0;

    while (num != 0)
    {
        digit = num % 10;
        product *= digit;
        sum += digit;
        num /= 10;
    }

    return answere = product - sum;
}
int main()
{
    int num, answere;
    cout << "Enter the Integer Number: ";
    cin >> num;
    answere = substructProductAndSum(num);
    cout << "The Difference of Product and Sum of Given Integer is: " << answere << "\n";
}