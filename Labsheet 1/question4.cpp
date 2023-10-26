/*A car travels a distance d1 at a speed s1, followed by a distance d2 at a speed s2 and finally a
distance d3 at a speed s3. Assuming all distances to be in km and all speeds in km/h, write a
program to input the values of s1, s2, s3 and d1, d2, d3 and display:  The total distance travelled.  The total time taken for the whole journey and
 The average speed over the journey.*/

#include <iostream>
using namespace std;

int main()
{
    float d1, d2, d3, s1, s2, s3, totalDistanceTravelled, totalTimeTaken, averageSpeed;
    
    cout<<"Enter value for d1: ";
    cin>>d1;
    cout<<"Enter value for s1: ";
    cin>>s1;
    cout<<"Enter value for d2: ";
    cin>>d2;
    cout<<"Enter value for s2: ";
    cin>>s2;
    cout<<"Enter value for d3: ";
    cin>>d3;
    cout<<"Enter value for s3: ";
    cin>>s3;

    
    totalDistanceTravelled = d1 + d2 + d3;
    totalTimeTaken = (d1/s1) + (d2/s2) + (d3/s3);
    averageSpeed = totalDistanceTravelled/totalTimeTaken;

    cout<<"Total distance travelled: "<<totalDistanceTravelled<<endl;
    cout<<"Total time taken for whole journey: "<<totalTimeTaken<<endl;
    cout<<"Average speed over the whole journey: "<<averageSpeed<<endl;

    return 0;
}