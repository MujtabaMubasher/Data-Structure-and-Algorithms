#include <iostream>
using namespace std;

void print(int n){
    // Base Condition
    if(n==0)
     return ;

   //print(n-1);  // Head Recursion

   cout << n << " " ;

  print(n-1);  // Tail Recursion
}

int main(){
    int n;
    cout<< "Enter the Value of n ";
    cin >> n;

    print(n);

    return 0;
}

// https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/118522/offering/1380913