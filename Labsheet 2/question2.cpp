/*
Make a copy of the program for question 1 and modify it so that it works for complex roots only. 
Note: Complex roots mean negative discriminants. The square root won’t work. What you should do is 
obtain the absolute value, find the square root, separate your calculation into a real and imaginary part 
(x+yi) then display using 
 cout<<x<<”+”<<y<<”i”<<endl;*/

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main()
 {
    double a, b, c, discriminant, real, imaginary;
    cout<<"For  ax^2 + bx + c = 0"<<endl<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;

    discriminant = pow(b, 2) - 4*a*c;

    if (discriminant >= 0)
    {
        cout<<"Invalid complex root equation, works only for complex roots equation.";
        return 0;
    }
    imaginary = sqrt((discriminant*-1)) / (2*a);
    real = (-1*b) / (2*a);

    cout<<real<<"+"<<imaginary<<"i"<<endl;
    cout<<real<<"-"<<imaginary<<"i"<<endl;
    return 0;
 }