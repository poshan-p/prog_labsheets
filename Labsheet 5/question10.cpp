#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;

    cout << "Enter n: ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        factorial*=i;
    }

    cout << "Factorial = " << factorial;
    

    return 0;
}