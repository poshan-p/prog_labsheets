#include <iostream>
using namespace std;

int main()
{
    int numOfAdults, numOfChilds, selection;
    double x, y;

    cout << "Number of adults: ";
    cin >> numOfAdults;
    cout << "Fees for an adult member: ";
    cin >> x;
    cout << "Number of childs: ";
    cin >> numOfChilds;
    cout << "Fees for an child member: ";
    cin >> y;
    cout << "1. Charge as members" << endl << "2. Charge as non-members" << endl << "Enter either 1 || 2: " ;
    cin >> selection;

    if (selection == 1)
    {
        cout << "Fees to be charged: " << (numOfAdults * x) + (numOfChilds * y);
    }
    else if (selection == 2)  
    {
       cout << "Fees to be charged: " << (2 * numOfAdults * x) + (1.5 * numOfChilds * y); 
    }
    else
    {
        cout << "Invalid selection";
    }
    return 0;
}