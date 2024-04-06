#include <iostream>
using namespace std;
 
 
 /*
    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E 
 
 */

int main(){
    
    int rows, col;
    cout << "Enter the numbers of Rows: ";
    cin >> rows;
    cout << "Enter the numbers of Columns: ";
    cin >> col;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            char ch = 'A' + j - 1;

            if (ch >= 'A' && ch <= 'Z')
            {
                cout << ch << " ";
            }
            else
            {
                cout<< "\nError: Character out of range!";
                return false;
            }
        }

        cout << endl;
    }
}