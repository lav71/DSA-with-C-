// Print the 0-1 Triangle Pattern.
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    bool val = true;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<val<<" ";
            val = !val;
        }
        cout<<endl;
    }
    return 0;
}