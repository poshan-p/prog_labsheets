#include <iostream>
using namespace std;

int main()
{
    int number;
    double sum = 0;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        sum+=(1.0/i);
    }
    
    cout << "Sum = " << sum;

    return 0;
}