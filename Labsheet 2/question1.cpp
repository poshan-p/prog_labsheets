/*Type in the program on quadratic equations and run it.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x1, x2;
    
    cout<<"For  ax^2 + bx + c = 0"<<endl<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;

    x1 = ((-1*b) - sqrt((pow(b, 2) - 4*a*c))) / (2*a);
    x2 = ((-1*b) + sqrt((pow(b, 2) - 4*a*c))) / (2*a);

    cout<<"x = "<<x1<<", x = "<<x2<<endl;

    return 0;

}