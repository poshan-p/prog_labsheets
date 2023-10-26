#include <iostream>
using namespace std;

int main()
{
    int sum = 0, number;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        sum+=i;
    }
    
    cout << "Sum = " << sum;

    return 0;
}