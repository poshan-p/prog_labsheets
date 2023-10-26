/*Write a program that asks the user his id number (use a simple integer value), score in
CSE1017Y and CSE1019Y and output the user’s name with his average score.*/

#include <iostream>
using namespace std;

int main()
{
    int id, scoreCSE1017Y, scoreCSE1019Y;
    
    cout<<"Please Enter your id number: ";
    cin>>id;
    cout<<"Enter your score in CSE1017Y: ";
    cin>>scoreCSE1017Y;
    cout<<"Enter your score in CSE1019Y: ";
    cin>>scoreCSE1019Y;

    cout<<"id: "<<id<<endl;
    cout<<"Score in CSE1017Y: "<<scoreCSE1017Y<<endl;
    cout<<"Score in CSE1019Y: "<<scoreCSE1019Y<<endl;
    cout<<"AVERAGE SCORE: "<<((scoreCSE1017Y+scoreCSE1019Y)/2)<<endl;

    return 0;
}