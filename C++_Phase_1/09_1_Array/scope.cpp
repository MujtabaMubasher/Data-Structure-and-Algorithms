#include <iostream>
using namespace std;


void dumyArray(int arr[]){
     
     arr[5] = 100;
     cout<<"Printing in function body: \n";
     for (int i = 0; i < 10; i++)
     {
        cout<< arr[i] << " , ";
     }
    cout<< "\nGive Controle to the Main Function \n"; 
}

int main(){
    int arr[10] = {1,2,5,-5,-10,9,5,8,23,65};
    dumyArray(arr);
    cout<<"Printing in Main body: \n";
     for (int i = 0; i < 10; i++)
     {
        cout<< arr[i] << " , ";
     }
} 