/*Given the length of two sides of a triangle and the size of the angle between the two sides, the length of 
the third side can be calculated from the Cos Rule: a2=b2
 + c2
 – 2bc Cos A. Other angles can also be 
calculated from the sine rule, which is . Furthermore, the area is calculated as 
Write a program that allows the input of two sides of a triangle and the angle between the two sides 
and it displays the length of the 3rd side, the remaining angles as well as the area of the triangle.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, A, B, C, area, semiPerimeter;
    cout << "Enter the length a, b and the angle between the in their respective order: ";
    cin>>a>>b>>C;

    C = (C/180) * M_PI;

    c = sqrt(pow(a, 2) + pow(b, 2) - 2*b*a*cos(C));
    A = asin((a*(sin(C)/c)));
    B = asin((b*(sin(C)/c)));

    semiPerimeter = (a + b + c)/2;
    area = sqrt((semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c)));

    cout<<"a = " << a << ", " << (A/M_PI)*180 << endl;
    cout<<"b = " << b << ", " << (B/M_PI)*180 << endl;
    cout<<"c = " << c << ", " << (C/M_PI)*180 << endl;
    cout<<"Area = " << area << endl;
    return 0;
}