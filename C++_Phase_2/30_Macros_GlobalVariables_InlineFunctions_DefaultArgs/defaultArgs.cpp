#include<iostream>
using namespace std;

/*
Note: Default Arguments in function starts from Right 
Left
*/

void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);


    return 0;
}

// https://www.naukri.com/code360/guided-paths/basics-of-c/content/118785/offering/1381146