#include <iostream>
using namespace std;

// SayDigit

void sayDigit(long long n , string arr[]){
     
    // Base Condition

    if(n==0)
      return;

    int digit = n % 10;
    n = n /10;

    // Recursive Relation

    sayDigit(n, arr);

    cout << arr[digit]<< " ";
}

int main(){
    long long  n;
    string arr[10] = {"Zero", "One","Two","Three","Four","Five","Six", "Seven","Eight","Nine"};

    cout << "Enter the Number ";
    cin >> n;

    sayDigit(n, arr);
}