#include <iostream>
using namespace std;

int main()
{
    int yearsElapsed = 0, numberOfRabbits = 495;

    do
    {
        if (numberOfRabbits <= 1000)
        {
            numberOfRabbits+=(numberOfRabbits*0.2);
        }
        else
        {
            numberOfRabbits+=(numberOfRabbits*0.1);
        }
        yearsElapsed++;
    } while (numberOfRabbits <= 1500);
    cout << "Number of years elapsed: " << yearsElapsed;

    return 0;
}