#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        if (number > 0)
        {
            cout << "Positive even number";
        }
        else if (number < 0)
        {
            cout << "Negative even number";
        }
        else
        {
            cout << "Zero";
        }
    }
    else
    {
        if (number > 0)
        {
            cout << "Positive odd number";
        }
        else
        {
            cout << "Negative odd number";
        }
    }

    return 0;
}