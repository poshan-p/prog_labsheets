/*Write a program that allows the input of the 2 (shorter) sides of a right-angled triangle and it calculates 
and displays the length of the hypotenuse, using Pythagora’s theorem.*/

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main()
 {
    double l1, l2, l3;
    cout<<"Enter length of the two short side of the triangle, l1, l2 : ";
    cin>>l1>>l2;

    l3 = sqrt((pow(l1, 2) + pow(l2, 2)));

    cout<<"Length of the longer side of the triangle: "<<l3<<endl;

    return 0;
 }