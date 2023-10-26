#include <iostream>
using namespace std;

int main()
{
    int tariffNumber, unitsConsumed;
    double charge;

    cout << "Enter tariff number: ";
    cin >> tariffNumber;
    if (tariffNumber != 110 && tariffNumber != 120 && tariffNumber != 140)
    {
        cout << "Invalid tariff number.";
        return 0;
    }
    
    cout << "Enter units consumed in a month: ";
    cin >> unitsConsumed;

    switch (tariffNumber)
    {
    case 110:
        charge = (unitsConsumed > 150) ? (25*2.75 + 50*3.25 + 75*4.0 + (unitsConsumed-150)*6.5) : ((unitsConsumed > 75) ? (25*2.75 + 50*3.25 + (unitsConsumed-75)*4.0) : (unitsConsumed > 25) ? (25*2.75 + (unitsConsumed-25)*3.25) : (unitsConsumed*2.75));
        charge = charge < 44.0 ? 44.0 : charge;
        break;
    case  120:
        charge = (unitsConsumed > 150) ? (25*3.0 + 50*3.5 + 75*4.25 + (unitsConsumed-150)*6.0) : ((unitsConsumed > 75) ? (25*3.0 + 50*3.5 + (unitsConsumed-75)*4.25) : (unitsConsumed > 25) ? (25*3.0 + (unitsConsumed-25)*3.5) : (unitsConsumed*3.0));
        charge = charge < 184.0 ? 184.0 : charge;
        break;
    default:
        charge = (unitsConsumed > 150) ? (25*3.25 + 50*3.75 + 75*4.5 + (unitsConsumed-150)*5.75) : ((unitsConsumed > 75) ? (25*3.25 + 50*3.75 + (unitsConsumed-75)*4.5) : (unitsConsumed > 25) ? (25*3.25 + (unitsConsumed-25)*3.75) : (unitsConsumed*3.25));
        charge = charge < 360.0 ? 360.0 : charge;
        break;
    }

    cout << "Total payable amount: " << charge;


    return 0;
}