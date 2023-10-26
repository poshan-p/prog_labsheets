#include <iostream>
using namespace std;

void inputArray(int arrayA[], int arrayB[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for arrayA, index: " << i << ": ";
        cin >> arrayA[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for arrayB, index: " << i << ": ";
        cin >> arrayB[i];
    }
}

void sumArray(int arrayA[], int arrayB[], int summedArray[], int size) {

    for (int i = 0; i < size; i++)
    {
        summedArray[i] = arrayA[i] + arrayB[i];
    }
    
}

int main()
{
    int arrayA[10], arrayB[10], summedArray[10];

    inputArray(arrayA, arrayB, 10);

    sumArray(arrayA, arrayB, summedArray, 10);

    for (int i = 0; i < sizeof(summedArray)/sizeof(int); i++)
    {
        cout << summedArray[i] << endl;
    }
    


    return 0;
}