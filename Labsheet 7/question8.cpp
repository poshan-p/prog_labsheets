#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName;
    int region;
    double rainfall, evaporation;
    cout << "Enter file name: ";
    cin >> fileName;

    ofstream file(fileName);

    if (file && file.is_open())
    {
        file << "Region\t" << "Rainfall\t" << "Evaporation" << endl;
        do
        {
            cout << "Enter region(input 0 to stop program): ";
            cin >> region;
            if (region != 0)
            {
                cout << "Enter rainfall in mm: ";
                cin >> rainfall;
                cout << "Enter evaporation: ";
                cin >> evaporation;

                file << region << "\t\t" << rainfall << "\t\t\t" << evaporation << endl;
            }
        
        } while (region != 0);
        file.close();
    }
    return 0;
}