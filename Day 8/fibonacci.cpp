//For a positive N , WAP that prints the first N Fibonacci numbers.
#include<iostream>
using namespace std;
int main()
{
    int n, a=0, b=1, c=0;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<a<<","<<b<<",";
    for(int i=2; i<=n; i++)
    {
      c=a+b;
      a=b;
      b=c;
      cout<<c<<",";
    }
    cout<<endl;
    return 0;
}