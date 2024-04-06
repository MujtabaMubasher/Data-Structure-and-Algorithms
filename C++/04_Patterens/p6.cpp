#include <iostream>
using namespace std;

/*

 *
 * *
 * * *
 * * * *
 * * * * *

*/
int main()
{
    int n;
    cout << "Enter the No of Rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << "* ";
            j++;
        }
        cout << "\n";

        i++;
    }
}