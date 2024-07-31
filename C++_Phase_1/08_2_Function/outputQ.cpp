#include <iostream>
using namespace std;

 //Question-1

 int update(int a){
    a -=5;
    return a;
 }

 //Question-2

 int update2(int a){
    int ans = a * a;
    return ans;
 }

 //Question-3

 void update3(int a){
    a = a / 2;
 }

int main(){
    // int a = 15;
    // update(a);
    // cout<< a << '\n';

  /*-------------Question-2---------*/
    // int a = 14;
    // a = update2(a);
    // cout<< a << '\n';

    /*-------------Question-3---------*/
    int a = 10;
    update3(a);
    cout<< a << '\n';
}