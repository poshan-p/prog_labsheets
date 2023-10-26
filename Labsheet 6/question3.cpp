#include <iostream>
using namespace std;

int main()
{
    int marks, totalMarks;

    for (int student = 1; student <= 5; student++)
    {
        totalMarks = 0;
        for (int subject = 1; subject <= 3; subject++)
        {
            cout << "Student " << student << ", Subject " << subject << " marks: ";
            cin >> marks;
            totalMarks+=marks;
        }
        cout << "Student " << student << ", Total marks = " << totalMarks << ", Average marks = " << totalMarks/3.0 << endl;
    }
    
    return 0;
}