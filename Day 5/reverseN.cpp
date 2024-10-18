//Print the number from n to 1 using for loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Reverse natural number is = ";

    for(int i=n; i>=1; i--)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}