#include <iostream>
using namespace std;

int main()
{
    int normalRate = 100, maxRate = 150, hoursWorked, wages;

    cout << "Input no. of hours worked: ";
    cin >> hoursWorked;

    wages = hoursWorked * (hoursWorked <= 40 ? normalRate : maxRate);

    cout << "Total wages for the week: Rs " << wages;

    return 0;
}