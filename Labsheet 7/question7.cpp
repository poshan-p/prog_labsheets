#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    string fileName;
    string studentID, highestScoringStudentID;
    float average = 0.0, highest = __FLT_MIN__, mark1, mark2, mark3;
    cout << "Enter file name: ";
    getline(cin, fileName);

    ifstream file(fileName);
    if (file && file.is_open())
    {
        while (!file.eof())
        {
            file >> studentID >> mark1 >> mark2 >> mark3;
            average = (mark1 + mark2 + mark3)/3;

            if (average > highest)
            {
                highestScoringStudentID = studentID;
                highest = average;
            }
            cout << "Student ID: " << studentID << ", Average Score: " << average << endl;
        }
        file.close();
    }
    cout << "Highest Scoring - Student ID: " << studentID << ", Average Score: " << average;
    return 0;
}