#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ofstream fileWrite("Squares.txt");
    int num;

    if (fileWrite && fileWrite.is_open()) {
        fileWrite << "Number\tSquare" << endl;
        do {
            cout << "Enter number: ";
            cin >> num;

            if (num != 0) {
                fileWrite << num << "\t\t" << pow(num, 2) << endl;
            }
        } while (num != 0);

        fileWrite.close();
    }
    
    return 0;
}