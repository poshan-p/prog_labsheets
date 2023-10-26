#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    string fileName, lineAvoid;
    cout << "Enter file name: ";
    cin >> fileName;

    ifstream file(fileName);

    bool surplusFlag = false, deficitFlag = false;
    double surplus = __DBL_MIN__, deficit = __DBL_MAX__, sR, sE, dR, dE,diff, rainfall, evaporation;
    int surplusRegion, deficitRegion, currentRegion;

    if (file && file.is_open())
    {
        getline(file, lineAvoid);
        while (!file.eof())
        {
            file >> currentRegion >> rainfall >> evaporation;
            diff = rainfall - evaporation;

            if (diff > 0)
            {
                surplusFlag = true;
                if (diff > surplus)
                {
                    surplus = diff;
                    surplusRegion = currentRegion;
                    sR = rainfall;
                    sE = evaporation;
                }
            }
            if (diff < 0)
            {
                deficitFlag = true;
                if (diff < deficit)
                {
                    deficit = diff;
                    deficitRegion = currentRegion;
                    dR = rainfall;
                    dE = evaporation;
                }
            }
        }
        file.close();
    }
    if (surplusFlag)
    {
        cout << "Highest water surplus, Region: " << surplusRegion << ", Rainfall: " << sR << ", Evaporation: " << sE << endl;
    }
    else
    {
        cout << "There were no water surplus" << endl;
    }
    if (deficitFlag)
    {
        cout << "Highest water deficit, Region: " << deficitRegion << ", Rainfall: " << dR << ", Evaporation: " << dE << endl;
    }
    else
    {
        cout << "There were no water deficit" << endl;
    }
    

    return 0;
}