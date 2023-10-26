/* Write a program that accepts two points, like in question 8 above, and determines the distance
between them. d = √((x2 – x1)2 + (y2 – y1)2) */

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float distance;
    cout<<"x1: ";
    cin>>x1;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y1: ";
    cin>>y1;
    cout<<"y2: ";
    cin>>y2;

    distance = sqrt((pow(x2-x1, 2) + pow(y2-y1, 2)));
    cout<<"Distance: "<<distance<<endl;

    return 0;
}