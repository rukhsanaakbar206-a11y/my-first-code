#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > 0 && b > 0)
    {
        if (a > b)
        {
            cout << "First number is greater";
        }
        else if (b > a)
        {
            cout << "Second number is greater";
        }
        else
        {
            cout << "Both numbers are equal";
        }
    }
    else
    {
        cout << "Both numbers must be positive";
    }

    return 0;
}