#include <iostream>
#include <vector>
using namespace std;

// Count Primes
// Sieve of Eratosthenes Theorem for Counting Prime Numbers

/*void Sieve_of_Eratosthenes(int n)
{
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
}*/

// Optimization

bool Sieve_of_Eratosthenes(int n, int isprime)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    { 
        if (prime[i])
        {
            //cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    if (prime[isprime])
    {
        return true;
    }else{
        return false;
    }

    // Time Complexity: O(n log(log n))
    
}



int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
   if(Sieve_of_Eratosthenes(num, num)){
       cout << num << " is Prime\n";
   }else{
     cout << num << " is not Prime\n";
   }
}

// https://leetcode.com/problems/count-primes/


/*

Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.


Example 2:

Input: n = 0
Output: 0


Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106


*/