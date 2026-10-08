#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 60)
    {
        cout << "Eligible for admission";
    }
    else
    {
        cout << "Not eligible for admission";
    }

    return 0;
}