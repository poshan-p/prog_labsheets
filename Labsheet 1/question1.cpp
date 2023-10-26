/*Write a program that requests the user to input the radius of a circle and it calculates and
displays the area of the circle (Assume pi to be 3.142)*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radius;
    float area;

    cout<<"Input the radius of the circle: ";
    cin>>radius;

    area = pow(radius, 2)*3.142;

    cout<<"Area of circle: "<<area<<endl;

    return 0;
}