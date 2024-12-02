/*The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles. 
Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. 
The program should then use a loop to display the distance the vehicle has traveled for each hour of that time.
*/
#include<iostream>
using namespace std;
int main()
{
    int speed, time, distance=0;
    cout<<"what is the speed of the vehicle in mph? ";
    cin>>speed;
    cout<<"how many hours has it traveled? ";
    cin>>time;

    for(int i=1; i<=time; i++)
    {
        distance=speed*i;
        cout<<"After "<<i<<" hours, the distance is "<<distance<<endl;
    }
    return 0;
}