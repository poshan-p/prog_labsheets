#include <iostream>
using namespace std;

int main()
{
    int x, i = 1, n, p;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of x: ";
    cin >> x;
    p = x;

    while (i < n)
    {
        p*=x;
        i++;
    }

    cout << p;
    

    return 0;
}