#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter marks:";
    cin>>marks;
    if(marks>=33)
    {
        cout<<"Pass."<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}