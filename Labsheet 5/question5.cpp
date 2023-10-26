#include <iostream>
using namespace std;

int main()
{
    int n, num;
    double average = 0.0;

    cout << "How many number do you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> num;

        average+=num;
    }
    
    average/=n;

    cout << "Average = " << average;

    return 0;
}