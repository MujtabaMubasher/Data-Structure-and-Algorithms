#include <iostream>
using namespace std;

//  int power(int x, int y ){
//    int answere = 1;
//    for (int i = 1; i <= y ; i++)
//    {
//      answere*= x;
//    }
//    return answere;
// }

int power(int x, int y) {
    int result = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            result *= x;
        }
        x *= x;
        y /= 2;
    }
    return result;
}

int main(){
  
  cout<< "Answer = "<< power(5, 5); 
}