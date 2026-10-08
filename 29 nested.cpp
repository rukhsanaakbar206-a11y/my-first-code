#include <iostream>
using namespace std;

int main()
{
    int marks, attendance;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter attendance: ";
    cin >> attendance;

    if (marks >= 50)
    {
        if (attendance >= 75)
        {
            cout << "Student Passed";
        }
        else
        {
            cout << "Failed due to low attendance";
        }
    }
    else
    {
        cout << "Failed due to low marks";
    }

    return 0;
}