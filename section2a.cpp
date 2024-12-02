/*a)	Write a C++ program that takes the ages of three visitors as input and calculates the total ticket revenue 
based on the following pricing:

•	Children under 12 years old are charged $8 per ticket.
•	Adults aged 12 to 59 are charged $15 per ticket.
•	Seniors aged 60 and over are charged $10 per ticket.
The program should determine the ticket price for each visitor, calculate the total revenue, and display it.
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int age , total=0;
    for (int i = 0; i <3; i++)
    {
        cout<<"please enter age of person "<<endl;
        cin >> age;
        if (age<12)
        {
            total+=8;
        }
        else if (age>=12 && age<=59)
        {
            total+=15;
        }
        else if (age>=60)
        {
            total+=10;
        }
        else 
        {
            cout<<"invalid age"<<endl;
        }
    }
    cout<<"total cost is "<<total<<endl;
    return 0;
}