#include <iostream>
using namespace std;

int main()
{
    int length, fDiagonal = 0, sDiagonal = 0;

    cout << "Enter number of rows||columns for square matrix: ";
    cin >> length;

    int matrix[length][length];

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "Enter value for index " << i << ", " << j << ": ";
            cin >> matrix[i][j];
        }
        
    }

    for (int i = 0; i < length; i++)
    {
        fDiagonal+=matrix[i][i];
        sDiagonal+=matrix[length-1-i][i];
    }

    if (length%2 == 0)
    {
        cout << fDiagonal * sDiagonal << endl;
    }
    else
    {
        cout << fDiagonal + sDiagonal << endl;
    }

    return 0;
}