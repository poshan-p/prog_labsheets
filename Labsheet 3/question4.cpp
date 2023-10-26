#include <iostream>
using namespace std;

int main()
{
    int normalRate = 250, droppedRate = 175, startTime, endTime;

    cout << "Please input the time of entry: ";
    cin >> startTime;
    cout << "Please input the time of leaving: ";
    cin >> endTime;

    int bill = (endTime <= 21) ? (normalRate * (endTime - startTime)) : (normalRate * (21 - startTime)) + (droppedRate * (endTime - 21)); 

    cout << "Bill: Rs " << bill;

    return 0;
}