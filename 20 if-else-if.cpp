#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "First number is largest";
    }
    else if (b > a && b > c)
    {
        cout << "Second number is largest";
    }
    else
    {
        cout << "Third number is largest";
    }

    return 0;
}