#include<iostream>
using namespace std;



inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    //ans = (a>b) ? a : b;
    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    //ans = (a>b) ? a : b;
    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
}

// https://www.naukri.com/code360/guided-paths/basics-of-c/content/118785/offering/1381146