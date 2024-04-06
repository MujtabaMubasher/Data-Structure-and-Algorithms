#include <iostream>
using namespace std;

/*

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    6 6 6 6 6 6
    7 7 7 7 7 7 7
    8 8 8 8 8 8 8 8
    9 9 9 9 9 9 9 9 9

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
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}