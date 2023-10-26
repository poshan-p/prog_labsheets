#include <iostream>
using namespace std;

int main()
{
    int n, num, high = INT_MIN, low = INT_MAX;
    double average = 0.0;

    cout << "How many number do you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << n - i << " numbers remains to be entered, enter number: ";
        cin >> num;

        if (num > high)
        {
            high = num;
        }
        if (num < low)
        {
            low = num;
        }
        
        average+=num;
    }
    
    average/=n;

    cout << "Average = " << average << endl;
    cout << "Lowest = " << low << endl;
    cout << "Highest = " << high << endl;

    return 0;
}