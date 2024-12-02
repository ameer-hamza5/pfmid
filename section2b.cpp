/*Write a C++ program that takes the input for miles driven and gallons used for a single trip. 
The program should calculate and display the miles per gallon (MPG) for that trip.
Note: Ensure that the program includes a check to verify that the entered miles and gallons 
are positive numbers before performing any calculations.
*/

#include<iostream>
using namespace std;
int main()
{
    int miles, gallons;
    cout<<"Enter the number of miles: ";
    cin>>miles;
    cout<<"Enter the number of gallons: ";
    cin>>gallons;
    if (gallons>0 && miles>0)
    {
        cout<<"The miles per gallon is: "<<miles/gallons<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
   
    return 0;
}