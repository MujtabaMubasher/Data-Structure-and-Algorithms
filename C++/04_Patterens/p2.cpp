#include <iostream>
using namespace std;

    /*
      1 1 1 1
      2 2 2 2
      3 3 3 3
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
            cout << i << " ";
            j++;
        }
        cout << "\n";

        i++;
    }
}