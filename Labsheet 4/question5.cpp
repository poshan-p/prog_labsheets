#include <iostream>
using namespace std;

int main()
{
    int salary, yearOfService, engineCapacity, allowance;
    bool eligible = true;

    cout << "Enter salary: ";
    cin >> salary;
    if (salary < 5000 || salary > 100000){
        cout << "Salary should be between 5,000 and 100,000 inclusively.";
        return 0;
    }

    cout << "Enter number of years of service: ";
    cin >> yearOfService;

    switch (salary){
    case 30000 ... 39999:
        eligible = yearOfService >= 25;
        if (eligible){
           engineCapacity = 1400; allowance = 4000;
        }
        break;
    case 40000 ... 49999:
        eligible = yearOfService >= 20;
        if (eligible){
           engineCapacity = 1500; allowance = 5000;
        }
        break;
    case 50000 ... 59999:
        if (yearOfService >= 10){
            engineCapacity = 1800; allowance = 8000;
        } else {
            engineCapacity = 1600; allowance = 6000;
        }
        break;
    case 60000 ... 74999:
        engineCapacity = 1800; allowance = 8000;
        break;
    case 75000 ... 100000:
        engineCapacity = 2000; allowance = 10000;
        break;
    default:
        eligible = false;
        break;
    }
    if (eligible){
        cout << "You are eligible for a free car with an engine capacity of " << engineCapacity << " or an optional car allowance of " << allowance;
    } else {
        cout << "You are not eligible for either a free car or a car allowance.";
    }

    return 0;
}