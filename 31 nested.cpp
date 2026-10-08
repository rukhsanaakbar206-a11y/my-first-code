#include <iostream>
using namespace std;

int main()
{
    int marks, attendance;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter attendance: ";
    cin >> attendance;

    if (marks >= 80)
    {
        if (attendance >= 80)
        {
            cout << "Student is eligible for scholarship";
        }
        else
        {
            cout << "Marks are enough but attendance is low";
        }
    }
    else
    {
        cout << "Marks are not enough for scholarship";
    }

    return 0;
}