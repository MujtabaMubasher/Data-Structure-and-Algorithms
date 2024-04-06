#include <iostream>
using namespace std;

int main(){

    //     int a,b;
    //     a =  cin.get();
    //     // by using cin.get we read ASCII Values
    //     cout << "ASCII values are: "<< a << endl;

    /****************************************************/

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 0;
    // while ( i <= n)
    // {
    //     cout << i << " , ";
    //        i++;
    // }

    /************Sum of 1 to N Numbers**************/

    // int sum = 0 , n;
    // cout << "Enter the value of n: ";
    // cin>>n;
    // int i = 1;
    // // while (i<=n)
    // // {
    // //     sum = sum + i;
    // //     i++;
    // // }

    // sum = n/2*(i + n);

    // cout<<"The Sum is: "<< sum<< endl;
    
  /************Sum of All Even Numbers**************/
  /************Farhenheit to Celcius**************/
  /***Read Char from User from 'Aa' to 'Zz' && integet '0 to '9'*/
  /*Read Write a function for convert String toLowerCase or UpperCase*/
  
  /************Find Number is Prime or not**************/

  int n;
  cout << "Enter the value of n: ";
  cin>>n;

//   if(n%2 != 0 && n%3 != 0){

//     cout<< n <<" is Prime Number"<< endl;
//   }else{
//         cout<< n <<" is not Prime Number"<< endl;
//   }
 int i = 2;
 while (i < n)
 {
     if (n % i == 0)
     {
         cout << n << " is not Prime Number" << endl;
         
     }else {
        cout<< n << "is Prime"<< endl;
     }

     i++;
    
 }
}