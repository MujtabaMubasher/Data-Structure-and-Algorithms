#include <iostream>
using namespace std;

    /*
     3 2 1
     3 2 1
     3 2 1
    */
int main()
{
    int n;
    cout << "Enter the No of Rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {   
        int j = 1;
        while (j<=n)
        {
           cout<< n-j+1<<" ";
           j++;
        }
        cout<<"\n";
       i++;
    }
}