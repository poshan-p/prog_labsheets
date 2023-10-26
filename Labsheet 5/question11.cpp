#include <iostream>
using namespace std;

int main()
{
    int n;
    double P, r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter P: ";
    cin >> P;

    cout << "Enter r: ";
    cin >> r;

    for (int i = 1; i <= n; i++)
    {
        P+=(P*(r/100));
        cout << "Year " << i << ", Total Amount : " << P << endl;
    }
    
    return 0;
}