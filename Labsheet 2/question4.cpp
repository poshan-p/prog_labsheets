/*
Write a program that allows the inputs of x and y coordinates of two points (x1,y1) and (x2,y2), and 
determines the distance between them. d = √((x2 – x1)2
 + (y2 – y1)2)*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2, distance;
    cout<<"Enter the value of x1, x2, y1 and y2 respectively: ";
    cin>>x1>>x2>>y1>>y2;

    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    cout << "Distance: " << distance << endl;

    return 0;
}