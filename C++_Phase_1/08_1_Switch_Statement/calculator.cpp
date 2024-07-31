#include <iostream>
using namespace std;

void calculator(int num1, char operartion, int num2)
{
    switch (operartion)
    {
    case '/':
        cout << (float(num1) / float(num2));
        break;
    case '*':
        cout << (num1 * num2);
        break;
    case '+':
        cout << (num1 + num2);
        break;
    case '-':
        cout << (num1 - num2);
        break;
    case '%':
        cout << (num1 % num2);
        break;

    default:
        cout << "Invalid Operation";
        break;
    }
}

int main(){
   int num1, num2;
   char operartion;
   cout << "Enter your Expression: "; 
   cin >> num1 >> operartion >> num2;
   calculator(num1, operartion, num2); 
}