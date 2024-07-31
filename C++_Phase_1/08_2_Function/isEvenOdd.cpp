#include <iostream>
using namespace std;

// Check that No is Even Or Odd

bool isEven(int num)
{
    if (num & 1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout << "Enter Any Number: ";
    cin >> num;
    if (isEven(num))
    {
        cout << num << " is Even Number\n";
    }
    else
    {
        cout << num << " is Odd Number\n";
    }
}