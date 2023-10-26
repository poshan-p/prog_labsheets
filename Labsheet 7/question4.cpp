#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    
    ifstream datRead("input.dat", ios::binary);
    ofstream datWrite("output.dat", ios::binary);

    char byte;

    if (datRead && datRead.is_open() && datWrite && datWrite.is_open())
    {
        while (!datRead.eof())
        {
            byte = datRead.get();
            datWrite.put(byte);
        }
        datRead.close();
        datWrite.close();
        
    }

    return 0;
}