#include <iostream>
using namespace std;

/*
 1 2 3 4
 1 2 3 4
 1 2 3 4
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

        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << "\n";

        i++;
    }
}