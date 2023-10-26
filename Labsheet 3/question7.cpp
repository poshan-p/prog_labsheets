#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number;
    
    cout << "Input number: ";
    cin >> number;

    if (remainder(sqrt(number), 1.0) == 0.0)
    {
        cout << number << " is a perfect square";
    }
    else
    {
        cout << number << " is not a perfect square";
    }
    return 0;
}