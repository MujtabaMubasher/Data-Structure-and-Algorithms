#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
    
    cout << arr << "\n";
     //attention here
    cout << ch << "\n";

    char *c = &ch[0];
    //prints entire string
    cout << c << "\n";
    //prints 1st Charater of string
    cout << *c << "\n";
    
    cout << "*********************\n";

    char temp = 'z';
    char *ptr = &temp;

    cout << *ptr << "\n";
    // Note: Printing the Characters Until Null Character Found
    cout << ptr << "\n";

    /*
      Note : char ch[6] = "abcde";
             char *ch = "abcde";  => Nhi Krh na Riskey ha 

        Explaine in the Lecture 26 notes    
    */

}