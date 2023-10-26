#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant, real, imaginary, x1, x2;

    cout << "Enter the coefficient a, b and c respectively: ";
    cin >> a >> b >> c;

    discriminant = pow(b, 2) - (4* a * c);
    if (discriminant < 0)
    {
        imaginary = sqrt((discriminant*-1)) / (2*a);
        real = (-1*b) / (2*a);

        cout<<"Imaginary roots"<<endl;
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        cout<<real<<"-"<<imaginary<<"i"<<endl;

    }
    else{
        x1 = ((-1*b) / (2*a)) + (sqrt((discriminant)) / (2*a));
        x2 = ((-1*b) / (2*a)) - (sqrt((discriminant)) / (2*a));

        cout<<"Real roots"<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    
    return 0;
}