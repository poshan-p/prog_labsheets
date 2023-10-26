#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName;
    string studentID;
    float mark1, mark2, mark3;
    cout << "Enter file name: ";
    cin >> fileName;
    ofstream file(fileName);
    if (file && file.is_open())
    {
        do
        {
            cout << "Enter student id: ";
            cin >> studentID;
            if (studentID != " ")
            {
                cout << "Mark 1: ";
                cin >> mark1;
                cout << "Mark 2: ";
                cin >> mark2;
                cout << "Mark 3: ";
                cin >> mark3;

                file << studentID << "\t" << mark1 << "\t" << mark2 << "\t" << mark3 << endl;
            }
        } while (studentID != " ");
        file.close();
    }
    return 0;
}