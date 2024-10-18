#include<iostream>
using namespace std;
int main()
{
    int n = 10829;
    int sum = 0;

    while(n>0)
    {
         int lastDigit = n%10;
         sum = sum + lastDigit;
         n=n/10;
    }

    cout<<"Sum = "<<sum<<endl;

    return 0;
}