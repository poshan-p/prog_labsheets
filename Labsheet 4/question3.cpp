#include <iostream>
using namespace std;

int main()
{
    int dependent;
    double annualIncome, taxPayable;

    cout << "Enter the number of dependent on the person, can claim only up to 3: ";
    cin >> dependent;
    if (dependent < 0 || dependent > 3)
    {
        cout << "Invalid number of dependent.";
        return 0;
    }

    cout << "Enter the person's annual income: ";
    cin >> annualIncome;

    switch (dependent)
    {
        case 0:
            annualIncome-=255000;
            break;
        case 1:
            annualIncome-=325000;
            break;
        case 2:
            annualIncome-=395000;
            break;
        default:
            annualIncome-=455500;
            break;
    }
    
    taxPayable = (annualIncome > 120000 ? (50000*0.15 + 70000*0.2 + (annualIncome-120000)*0.25) : (annualIncome > 50000 ? (50000*0.15 + (annualIncome-50000)*0.2) : (annualIncome*0.15)));

    cout << "Tax payable by the person: " << taxPayable;

    return 0;
}
