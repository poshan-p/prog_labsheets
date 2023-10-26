#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "**********************************\n********Counting in Maths*********\n**********************************\n1.Sum of first n counting numbers\n2.Sum of first nth odd numbers\n3.Number of division by two\n0.Exit\n**********************************\nEnter your choice (0-3): ";
        cin >> choice;
        if (choice >=1 && choice <= 3)
        {
            int n, sum = 0;
            cout << "Enter n: ";
            cin >> n;

            switch(choice) {
                case 1:
                    for (int i = 1; i <= n; i++)
                    {
                        sum+=i;
                    }
                    break;
                case 2:
                    for (int i = 1; i <= n; i+=2)
                    {
                        sum+=i;
                    }
                    break;
                case 3:
                    while (n > 1)
                    {
                        n/=2;
                        sum++;
                    } 
                    break;
            }
            cout << "Answer for choice " << choice << ": " << sum;
        }
        else if(choice < 0 || choice > 3) {
            cout << "Invalid choice, please enter a number between 0 and 3" << endl;
        }
    } while (choice < 0 || choice > 3);
    return 0;
}