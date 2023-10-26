/*Modify the program in question 6 so that it allows the input of two values x and n and it calculates and 
displays the value of xn+ 3xn-1 + 2xn-2*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double value, x, n;
    cout<<"Enter x and n respectively: ";
    cin>>x>>n;
    value = pow(x,n) + 3 * pow(x,n-1) + 2 * pow(x,n-2);

    cout<<"Calculated value: "<<value<<endl;
    
    return 0;
}