// Write a function to check number is even or odd

#include<iostream>
using namespace std;

bool check(int a){
    if(a% 2==0)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    cout<<check(10)<<endl;
    return 0;
}