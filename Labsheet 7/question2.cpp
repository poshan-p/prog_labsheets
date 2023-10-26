#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fileRead("Squares.txt");
    string line;

    if (fileRead && fileRead.is_open()) {
        while (!fileRead.eof()) {
            getline(fileRead, line);
            cout << line << endl;
        }

        fileRead.close();
    }
    return 0;
}