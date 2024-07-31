#include <iostream>
using namespace std;

bool palindrome(string &str, int i, int j){
      
    //Base Case
    
    if (i >= j) 
      return true;

   if(str[i] != str[j])
      return false;
   
   i++,j--;
   return palindrome(str,i,j);
    
}

int main(){
   string str;
   cout << "Enter the any String ";
   cin >> str;

   if (palindrome(str, 0, str.length()-1))
   {
      cout << "String is Palindrome\n";
   }else{
      cout << "String is not Palindrome\n"; 
   }
   
}

// https://www.naukri.com/code360/problems/check-palindrome_920555