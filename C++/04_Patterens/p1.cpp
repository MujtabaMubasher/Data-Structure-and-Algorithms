#include <iostream>
using namespace std;

    /*
       * * * *
       * * * *
       * * * *
       * * * *
    */
int main()
{
    int n;
    cout << "Enter the No of Rows: ";
    cin >> n;
    int i = 0;

    while (i < n)
    {
        int j=0;
        while (j < n)
        {
            cout << "* ";
            j++;
        }

        cout << "\n";
        i++;
    }
    
}