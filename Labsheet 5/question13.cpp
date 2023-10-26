#include <iostream>
using namespace std;

int main()
{
    int n, countEven = 0, sum = 0;

    do
    {
        cout << "Enter number: ";
        cin >> n;

        if (n%2 == 0)
        {
            countEven++;
            sum+=n;
        }
        
    } while (n >= 0);
    
    cout << "Number of even numbers entered: " << countEven << endl;
    cout << "Sum of even numbers: " << sum << endl;

    return 0;
}