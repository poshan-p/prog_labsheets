#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream file1Read("file1.txt"), file2Read("file2.txt");
    ofstream targetWrite("target.txt");
    string data;

    if (file1Read && file1Read.is_open() && file2Read && file2Read.is_open() && targetWrite && targetWrite.is_open())
    {
        while (!file1Read.eof())
        {
            getline(file1Read, data);
            targetWrite << data << endl;
        }
        file1Read.close();
        while (!file2Read.eof())
        {
            getline(file2Read, data);
            targetWrite << data << endl;
        }
        file2Read.close();
        targetWrite.close();
    }
    
    return 0;
}