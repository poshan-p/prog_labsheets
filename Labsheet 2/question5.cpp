/*
A ladder in leant against a wall as shown below. Write a program that takes as input the length of the 
ladder and the angle of inclination (from the ground) and calculates and displays the maximum height of 
the wall against which the ladder can be used.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double lengthOfLadder, angleInRad, maxHeight;
    cout << "Enter length of ladder:";
    cin>>lengthOfLadder;
    cout << "Enter angle of ladder from ground in radians: ";
    cin >> angleInRad;

    maxHeight = lengthOfLadder * sin(angleInRad);

    cout << "Max height: "<< maxHeight;


    return 0;
}