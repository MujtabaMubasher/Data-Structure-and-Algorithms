#include <iostream>
using namespace std;

/*

   #include <iostream>
using namespace std;

/*

    A A A A 
    B B B B 
    C C C C 
    D D D D 
    E E E E
   */

int main()
{
    int n, row, col;
    cout << "Enter the No of Rows: ";
    cin >> row;
    cout << "Enter the No of Columns: ";
    cin >> col;
    int i = 1;
    char ch = 65;
    while (i <= row)
    {
        int j = 1;
        while (j <= col)
        {
            if (ch >= 65 && ch <= 90)
            {
                cout << ch << " ";
            }else{
                return false;
            }
          j++;
        }
        cout << endl;
        ch++;
        i++;
    }
}