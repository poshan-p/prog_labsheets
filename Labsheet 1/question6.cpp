/*The figure below shows a concrete cylindrical pillar with a cylindrical hole in the middle. The hole is
of two parts. One part is of height h1, with radius r1, the other part is of height h2, with radius r2. The pillar has height h and radius r. Write a program, that takes as inputs the values of h, r, h1, r1
and r2 and calculates the volume of concrete required to construct such a pillar with the given
values.
Note: h = h1 + h2*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h, h1, h2, r, r1, r2;
    float volume;
    cout<<"h: ";
    cin>>h;
    cout<<"r: ";
    cin>>r;
    cout<<"h1: ";
    cin>>h1;
    cout<<"r1: ";
    cin>>r1;
    cout<<"h2: ";
    cin>>h2;
    cout<<"r2: ";
    cin>>r2;

    volume = (pow(r,2)*h - pow(r1,2)*h1 - pow(r2,2)*h2)*3.142;

    cout<<"Volume of concrete required: "<<volume<<endl;

    return 0;
}