#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter exam marks: ";
    cin >> marks;

    switch (marks)
    {
    case 70 ... 100:
        cout << "Grade: A";
        break;
    case 60 ... 69:
        cout << "Grade: B";
        break;
    case 50 ... 59:
        cout << "Grade: C";
        break;
    case 40 ... 49:
        cout << "Grade: D";
        break;
    case 0 ... 39:
        cout << "Grade: F";
        break;
    default:
        cout << "Invalid marks, should be between 0 and 100.";
        break;
    }
    return 0;
}