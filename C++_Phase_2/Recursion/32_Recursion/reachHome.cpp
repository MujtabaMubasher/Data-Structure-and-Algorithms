#include <iostream>
using namespace std;

void reacHome(int src, int dest)
{
    // Base Condition
    if (src == dest)
    {
        cout << "Reached\n";
        return;
    }
    cout<< "Source " << src << " " << "Destination " << dest <<"\n";
    src ++;
   // Recursive Relation
   
   reacHome(src, dest);

    
}

int main(){
    int src, destination;
    cout << "Enter the source: ";
    cin >> src;
    cout<< "Enter the Destination: ";
    cin >> destination;

    reacHome(src, destination);
}