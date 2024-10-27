#include<iostream>
using namespace std;
int main()
{
    int n=5;
    char i,j;
    for(i='E'; i>='A'; i--)
    {
        for( j='E'; j>='A'; j--)
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}