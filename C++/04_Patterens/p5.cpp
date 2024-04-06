#include <iostream>
using namespace std;

    /*
     1 2 3 
     4 5 6
     7 8 9
    */
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int i = 1;
    int k = 0;
    while (i <= n)
    {
        int j = 1;
        while (j<=n)
        {
           cout<<  k+1 << " ";
           j++;
           k++;
        }
        cout<<"\n";
       
       i++;
    }
     
}