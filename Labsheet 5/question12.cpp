#include <iostream>
using namespace std;

int main()
{
    double capital, increasedCapital = 0, rate;
    int numOfYears = 0;

    cout << "Enter amount: ";
    cin >> capital;
    increasedCapital = capital;

    cout << "Enter rate per year: ";
    cin >> rate;

    while (increasedCapital < (2*capital))
    {
        increasedCapital+=(increasedCapital*(rate/100));
        numOfYears++;
    }

    cout << "Years taken to increase by twofolds: " << numOfYears;
    

    return 0;
}