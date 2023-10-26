#include <iostream>
using namespace std;

int main()
{
    int type;

    cout << "Choose the type of car by entering a number between 1 and 5 inclusively: ";
    cin >> type;

    switch (type){
        case 1:
            cout << "Car of 1500 CC";
            break;
        case 2:
            cout << "Car of 1500 CC with automatic mirrors";
            break;
        case 3:
            cout << "Car of 1500 CC with automatic mirrors and front and rear sensors";
            break;
        case 4:
            cout << "Car of 1200 CC";
            break;
        case 5:
            cout << "Car of 1200 CC with automatic gear";
            break;
        default:
            cout << "Invalid car type.";
            break;
        
    }

    return 0;
}