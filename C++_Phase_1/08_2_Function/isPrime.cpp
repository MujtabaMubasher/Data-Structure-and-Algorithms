#include <iostream>
using namespace std;
 // isPrime

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout<< "Enter Number: ";
    cin >> num;
    if (isPrime(num))
    {
        cout<< num <<" is Prime\n";
    }
    else
    {
        cout<< num <<" is not Prime\n";
    }
    
}
