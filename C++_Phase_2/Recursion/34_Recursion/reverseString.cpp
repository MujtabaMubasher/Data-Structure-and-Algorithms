#include <iostream>
#include <algorithm>
using namespace std;

void reverseString(string &str, int i, int j){

    // Base Condition
    if(i > j)
     return;

   swap(str[i], str[j]);
   i++,j--;
   reverseString(str, i, j);
}

int main(){
    string str = "mujtaba";

    cout << "Before: "<< str <<"\n";
    
    reverseString(str, 0, str.length()-1);

    cout << "After: "<< str <<"\n";
}

// https://www.naukri.com/code360/problems/reverse-the-string_799927