#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "A is largest";
        }
        else
        {
            cout << "C is largest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is largest";
        }
        else
        {
            cout << "C is largest";
        }
    }

    return 0;
}