#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter n: ";
        cin >> n;
        if (n > 100)
        {
            cout << "Wrong Input,";
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (n%i == 0)
                {
                    cout << i << endl;
                }
            }
            
        }
    } while (n > 100);
    

    return 0;
}