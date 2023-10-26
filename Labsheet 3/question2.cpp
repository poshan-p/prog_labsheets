/*

*/

#include <iostream>

using namespace std;

int main()
{
    int age, yearOfBirth;
    cout << "Input your year of birth: ";

    cin >> yearOfBirth;

    age = 2023 - yearOfBirth;
    if (age < 18)
    {
        cout << "You are a child aged " << age << "!";
    } 
    else
    {
        cout << "You are an adult aged " << age << " year old!";
    }
    
    return 0;
}