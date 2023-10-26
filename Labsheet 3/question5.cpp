#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter num1 and num2 respectively: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << "Number 1 is greater than number 2";
    }
    else
    {
        cout << "Number 2 is greater than number 1";
    }
    return 0;
}