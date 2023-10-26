/* A toy is made of two balls, one fitted inside the other one as shown in the diagram below. The space
in-between the balls is filled with a liquid. Write a program that allows the input of the radius of
each of the balls and it calculates and displays the volume of the liquid. */

#include <iostream>
#include <math.h>
using namespace std;

double volumeOfCircle(int r)
{
    return ((4.0/3.0)*M_PI*pow(r,3));
}

int main()
{
    int outerRadius, innerRadius;
    double volumeOfLiquid;

    cout<<"Enter radius of outer ball: ";
    cin>>outerRadius;
    cout<<"Enter radius of inner ball: ";
    cin>>innerRadius;

    volumeOfLiquid = volumeOfCircle(outerRadius) - volumeOfCircle(innerRadius);
    cout<<"Volume of liquid: "<<volumeOfLiquid;

    return 0;

}

