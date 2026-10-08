#include <iostream>
using namespace std;

int main()
{
    int units;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100)
    {
        cout << "Bill = Rs. 500";
    }
    else if (units <= 200)
    {
        cout << "Bill = Rs. 1000";
    }
    else if (units <= 300)
    {
        cout << "Bill = Rs. 2000";
    }
    else
    {
        cout << "Bill = Rs. 3000";
    }

    return 0;
}