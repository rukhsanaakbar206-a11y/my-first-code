#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "MENU" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice)
    {
        case 1:
            cout << "Answer = " << a + b;
            break;

        case 2:
            cout << "Answer = " << a - b;
            break;

        case 3:
            cout << "Answer = " << a * b;
            break;

        case 4:
            cout << "Answer = " << a / b;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}