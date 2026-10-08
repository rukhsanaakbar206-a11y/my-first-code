#include <iostream>
using namespace std;

int main()
{
    int password;

    cout << "Enter password: ";
    cin >> password;

    if (password == 1234)
    {
        cout << "Password correct";

        int pin;
        cout << "\nEnter PIN: ";
        cin >> pin;

        if (pin == 5678)
        {
            cout << "Login successful";
        }
        else
        {
            cout << "Wrong PIN";
        }
    }
    else
    {
        cout << "Wrong password";
    }

    return 0;
}