#include <iostream>
using namespace std;

int main()
{
    int percentage;

    cout << "Enter percentage: ";
    cin >> percentage;

    if (percentage >= 80)
    {
        cout << "Excellent";
    }
    else if (percentage >= 70)
    {
        cout << "Very Good";
    }
    else if (percentage >= 60)
    {
        cout << "Good";
    }
    else if (percentage >= 50)
    {
        cout << "Average";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}