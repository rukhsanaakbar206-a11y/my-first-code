#include <iostream>
using namespace std;

int main()
{
    int marks, attendance;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (marks >= 50)
    {
        if (attendance >= 75)
        {
            cout << "Student is eligible for admission";
        }
        else
        {
            cout << "Attendance is less than 75%";
        }
    }
    else
    {
        cout << "Marks are less than 50";
    }

    return 0;
}