#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, countP = 0, countN = 0;

    do {
        cout << "Enter number: ";
        cin >> number;

        if (number != -2)
        {
            if (number > 0)
            {
                sum+=number;
                countP++;
            }
            else
            {
                countN++;
            }
            
        }
    } while(number != -2);

    cout << "Sum = " << sum << "\nNumber of positive number entered = " << countP << "\nNumber of negative number entered = " << countN;

    return 0;
}