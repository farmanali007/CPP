#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int sum(int);
int sum(int a)
{
    if(a==1)
    return a;
    int s=0;
    s=a+sum(a-1);
    return s;
}
int main()
{  
    int Number;
    cout<<"enter a number"<<endl;
    cin>>Number;
    int b=sum(Number);
    cout<<b<<endl;
    return 0;
}