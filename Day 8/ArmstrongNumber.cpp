#include<iostream>
using namespace std;
int main()
{
    int n, r, sum =0, temp;
    cout<<"Enter the number: ";
    cin>>n;
    temp = n;
    while(n>0)
    {
        r=n%10;
        sum = sum + (r*r*r);
        n=n/10;
    }

    if(temp == sum)
    {
        cout<<"The number is Armstrong number.";
    }

    else{
        cout<<"The number is not Armstrong number.";
    }
    return 0;
}