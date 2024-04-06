#include <iostream>
using namespace std;

/*

    1 
    2 3 
    3 4 5 
    4 5 6 7 
    5 6 7 8 9 
    6 7 8 9 10 11 
    7 8 9 10 11 12 13 
    8 9 10 11 12 13 14 15 
    9 10 11 12 13 14 15 16 17 
    10 11 12 13 14 15 16 17 18 19  


   */

int main()
{
    int n;
    cout << "Enter the No of Rows: ";
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 0;
        while (j<i)
        {
            cout<<j+i<<" ";
            j++;
        }
        cout<< endl;
        i++;
    }  
}