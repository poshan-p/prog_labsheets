/* Consider the program in question 6. Given that concrete is sold as full containers of size y m3, 
(where y is an integer). Modify the program so that it also allows as input the value of y and the cost of a
container and displays the cost of concrete for a pillar. */

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

    int y, costOfContainer;
    float priceForPillar;
    cout<<"y: ";
    cin>>y;
    cout<<"Cost of container: ";
    cin>>costOfContainer;

    priceForPillar = (volume/y) * costOfContainer;
    cout<<"Price for one pillar: "<<priceForPillar<<endl;

    return 0;
}