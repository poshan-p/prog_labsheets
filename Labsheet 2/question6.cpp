/*Write a program that allows the input of a value x and calculates and displays the value of x5
 + 3x4+2x3*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double value, x;
    cout<<"Enter x: ";
    cin>>x;
    value = pow(x,5) + 3 * pow(x,4) + 2 * pow(x,3);

    cout<<"Calculated value: "<<value<<endl;
    
    return 0;
}