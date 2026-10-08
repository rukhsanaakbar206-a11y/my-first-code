#include <iostream>
using namespace std;

int main()
{
    int temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature >= 40)
    {
        cout << "Very Hot";
    }
    else if (temperature >= 30)
    {
        cout << "Hot";
    }
    else if (temperature >= 20)
    {
        cout << "Normal";
    }
    else
    {
        cout << "Cold";
    }

    return 0;
}