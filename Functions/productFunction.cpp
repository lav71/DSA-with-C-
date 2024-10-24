#include<iostream>
using namespace std;

int prod(int a, int b){
    int prod = a*b;
    return prod;
}

int main()
{
    int p = prod(2,5);
    cout<<"Product = "<< p <<endl;

    return 0;
}