/*Write a program that calculates the cost per square centimetre of a circular pizza, given its diameter
and price as inputs.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float diameter, price, costPerArea;

    cout<<"Input the pizza's diameter in cm: ";
    cin>>diameter;
    cout<<"Input the pizza's price: ";
    cin>>price;
    
    costPerArea = price / (0.25*pow(diameter, 2)*3.142);

    cout<<"Cost per sqrt(cm): "<<costPerArea;

    return 0;
}