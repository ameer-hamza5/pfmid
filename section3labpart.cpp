/*Write a C++ program that determines if a given integer is a perfect number. 
An integer is considered a perfect number if the sum of its divisors, 
including 1 (but excluding the number itself), equals the number. 
For example, 6 is a perfect number because its divisors (1, 2, and 3) sum to 6 (i.e., 6 = 1 + 2 + 3).*/
#include<iostream>
using namespace std;
int main(){
    int number, sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    if(number>0){
        for (int i = 1; i <= number/2; i++)
        {
            if (number%i==0)
            {
                sum+=i;
            }
        }
        if (sum==number)
        {
            cout<<"The number is perfect"<<endl;
        }
        else
        {
            cout<<"The number is not perfect"<<endl;
        }
    }
    else 
    {
        cout<<"Invalid input"<<endl;
    }
    return 0;
}