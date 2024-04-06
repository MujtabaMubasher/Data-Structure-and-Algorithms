#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    int number= 3;

    int c=1;
    int d= c++;
    int e = ++c;
    
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage-inside If\n";
    }
    else
    {
        cout << "stage2-inside else";
    }

    cout << a << " " << b << "\n";

    cout<< 25*(++number)<<"\n";

    cout<< d<<"\n"<<e<<'\n';
}