#include <iostream>
using namespace std;

int main()
{
    int yearsOfService, hours, salary;

    cout << "Enter years of service of the worker: ";
    cin >> yearsOfService;
    if (yearsOfService > 30)
    {
        cout << "Years of service cannot be more than 30.";
        return 0;
    }
    
    cout << "Enter hours worked this week: ";
    cin >> hours;
    if (hours > 60)
    {
        cout << "Worker cannot work more than 60 hours per week.";
        return 0;
    }

    salary = yearsOfService > 15 ? (hours > 40 ? ((40*200) + ((hours-40)*300)) : (hours*200)) : (hours > 45 ? ((45*150) + ((hours-45)*250)) : (hours*150));

    cout << "Salary: " << salary;

    return 0;
}