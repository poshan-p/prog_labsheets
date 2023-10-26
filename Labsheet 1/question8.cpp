/* Two points in a plane are specified using the coordinates (x1, y1) and (x2, y2). Write a program that
calculates the slope of a line through two non-vertical points entered by the user.
Hint: m = (y2 – y1)/(x2 – x1) */

#include <iostream>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float slope;
    cout<<"x1: ";
    cin>>x1;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y1: ";
    cin>>y1;
    cout<<"y2: ";
    cin>>y2;

    slope = (y2-y1)/(x2-x1);
    cout<<"Slope: "<<slope<<endl;

    return 0;
}