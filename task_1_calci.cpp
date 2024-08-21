#include<iostream>
using namespace std;
int main()
{
    int i;
    do
    {
        cout << "Welcome to simple calculator" << endl;
        int a, b;
        int operation;
        cout << "Enter two number seperated by spaces : ";
        cin >> a;
        cin >> b;
        cout << "Press 1 for Addition (+) " << endl;
        cout << "Press 2 for Subtraction (-)" << endl;
        cout << "Press 3 for Multiplication (*)" << endl;
        cout << "Press 4 for Division-Quotient (/)" << endl;
        cout << "Press 5 for D-Remainder (%)" << endl;
        cout << "\nSelect any Operation : ";
        cin >> operation;
        cout << "\nYour Answer is : ";
        switch (operation)
        {
        case 1:
            cout << (a + b) << endl;
            break;
        case 2:
            cout << (a - b) << endl;
            break;
        case 3:
            cout << (a * b) << endl;
            break;
        case 4:
            cout << (a / b) << endl;
            break;
        case 5:
            cout << (a % b) << endl;
            break;
        default:
            cout << "Operation not Found\n";
            break;
        }
        cout << "Press 1 for Continue " << endl;
        cout << "Press 0 for End " << endl;
        cout << "Are You want to Continue? (1/0) : ";
        cin >> i;
    }
    while (i);
      cout << "Thank You for using this Calculator !!\n";
      return 0;
}