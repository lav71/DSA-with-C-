#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    bool  isPrime = true;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            bool isPrime = false;
            break;
        }
       
    }

    if(isPrime)
    {
        cout<<"The number is prime ."<<endl;
    }else{
        cout<<"The number is not prime . "<<endl;
    }
    return 0;
}