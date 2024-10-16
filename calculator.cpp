//Simple calculator using if-else
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter operator:";
    cin>>op;

    if(op== '+')
    {
        cout<<"a+b ="<<(a+b)<<endl;
    }
    else if(op== '-')
    {
        cout<<"a-b= "<<(a-b)<<endl;
    }
    else if(op== '*')
    {
        cout<<"a*b= "<<(a*b)<<endl;
    }
    else if(op== '/')
    {
        cout<<"a/b= "<<(a/b)<<endl;
    }
    else
    {
        cout<<"Invalid Operator."<<endl;
    }

    return 0;
}