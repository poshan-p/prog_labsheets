#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream squaresRead("Squares.txt");
    ofstream analysisWrite("Analysis.txt");
    string lineavoid;
    double sum = 0.0;
    int counter = 0, largest = INT_MIN, smallest = INT_MAX, currentNum;

    if (squaresRead && squaresRead.is_open() && analysisWrite && analysisWrite.is_open())
    {
        getline(squaresRead, lineavoid);
        while (!squaresRead.eof())
        {
            squaresRead >> lineavoid >> currentNum;
            
            sum+=currentNum;
            counter++;

            if (currentNum > largest)
            {
                largest = currentNum;
            }
            if (currentNum < smallest) 
            {
                smallest = currentNum;
            }
        }
        squaresRead.close();

        analysisWrite << "Sum\t\t\t" << sum << endl;
        analysisWrite << "Average\t\t" << sum/counter << endl;
        analysisWrite << "Largest\t\t" << largest << endl;
        analysisWrite << "Smallest\t" << smallest << endl;

        analysisWrite.close();
        
    }
    return 0;
}