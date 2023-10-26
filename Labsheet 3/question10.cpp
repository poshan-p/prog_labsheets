#include <iostream>
using namespace std;

int main()
{
    double speed;

    cout << "Enter speed in km/h: ";
    cin >> speed;

    if (speed < 0 || speed > 300)
    {
        cout << "Invalid value for speed entered.";
    }
    else if(speed <= 90)
    {
        cout << "Speed limit not exceeded.";
    }
    else
    {
        cout << "Speed limit exceeded." <<  endl << "Fine: " << (((speed - 90)*10)+500);
    }
    return 0;
    
}