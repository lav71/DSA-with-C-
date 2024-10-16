// Write a C++ program to get a number from the user and print whether it's positive, negative or zero.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if(n>=1)
    {
        cout<<"Number is positive.";
    }

    else if (n<0)
    {
        cout<<"Number is negative.";
    }
    else{
        cout<<"Number is zero.";
    }
    return 0;
}