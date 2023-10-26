#include <iostream>
using namespace std;

int main()
{
    int x;
    
    cout << "Enter x: ";
    cin >> x;

    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    
    return 0;
}