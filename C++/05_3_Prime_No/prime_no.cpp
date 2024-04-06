#include <iostream>
using namespace std;

// Write a function to check that Given number is Prime or Not?

bool isNumberPrime(int num)
{
    bool isPrime = false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is Not Prime Number\n";
            break;
        }

        isPrime = true;
    }

    return isPrime;
}
int main()
{

    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number == 1 || number == 2)
    {
        cout << number << " is Not Prime Number\n";
    }
    bool isPrime = isNumberPrime(number);
    if (isPrime)
    {
        cout << number << " is Prime Number\n";
    }
}