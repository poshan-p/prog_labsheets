#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;

    do {
        cout << "Enter number: ";
        cin >> number;

        if (number >= 0)
        {
            cout << pow(number, 2) << endl;
        }
        
    } while(number >= 0);

    return 0;
}