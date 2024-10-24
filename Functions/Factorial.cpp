#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact =1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial of ("<< n<<") = "<<fact<<endl;
    return fact;
}

int main()
{
    factorial(5);
    return 0;
}