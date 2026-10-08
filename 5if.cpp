#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 10 == 0)
    {
        cout << "Number is divisible by 10";
    }

    return 0;
}