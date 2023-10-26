#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i+=3)
    {
        cout << i << endl;
        sum+=pow(i, 2);
    }

    cout << "Sum = " << sum;
    

    return 0;
}