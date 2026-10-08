#include <iostream>
using namespace std;

int main()
{
    int choice;
    int balance = 50000;
    int amount;

    cout << " ATM MENU " << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Deposit Money" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Your balance is Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                cout << "Please collect your money";
                cout << "\nRemaining balance = Rs. " << balance - amount;
            }
            else
            {
                cout << "Insufficient balance";
            }
            break;

        case 3:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            cout << "New balance = Rs. " << balance + amount;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}