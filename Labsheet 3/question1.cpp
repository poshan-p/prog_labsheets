/*
Write a program that allows the user to input the radius of a circle, and it calculates and
displays the area. The program should only accept non-zero positive values for the radius
and display an error message if the user tries to input a zero or negative value.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius, area;
    cout << "Enter radius of circle: ";
    cin >> radius;

    if (radius > 0)
    {
        area = M_PI * pow(radius, 2);
        cout << "Radius of circle = " << area;
    }
    else
    {
        cout << "Invalid radius.";
    }
    return 0;
}