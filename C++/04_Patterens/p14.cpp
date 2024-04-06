#include <iostream>
using namespace std;
 
 
 /*
    A B C D E 
    F G H I J 
    K L M N O 
    P Q R S T 
    U V W X Y 
 */

int main(){
    
    int rows, col;
    char ch = 'A' ;
    cout << "Enter the numbers of Rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                cout << ch << " ";
                ch++;
            }
            else
            { 
                cout << "Character out of range!";
                return 0;
            }
        }

        cout << endl;
    }
}