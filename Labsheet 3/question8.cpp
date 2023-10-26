#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter quiz score: ";
    cin >> score;

    switch (score)
    {
    case 1:
        cout << "Grade: A";
        break;
    case 2:
        cout << "Grade: B";
        break;
    case 3:
        cout << "Grade: C";
        break;
    case 4:
        cout << "Grade: D";
        break;
    case 5:
        cout << "Grade: E";
        break;
    default:
        cout << "Grade: F";
        break;
    }
    return 0;
}