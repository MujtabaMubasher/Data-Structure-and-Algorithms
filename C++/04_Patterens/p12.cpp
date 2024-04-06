#include <iostream>
using namespace std;

/*

    A A A A A 
    B B B B B 
    C C C C C 
    D D D D D 
    E E E E E 
    F F F F F 
   */

int main()
{
    int row, col;
    cout << "Enter the No of Rows: ";
    cin >> row;
    cout << "Enter the No of Columns: ";
    cin >> col;
    int i = 1;
    while (i <= row)
    {
        int j = 1;
        while (j <= col)
        {
            char ch ='A' + i - 1;
            if (ch >= 'A' && ch <= 'Z')
            {
                cout << ch << " ";
            }else{
                return false;
            }
          j++;
        }
        cout << endl;
        i++;
    }
}