#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{  
    int Numbers[10];
    cout<<"enter 10 numbers"<<endl;
    for(int i=0;i<=9;i++)
    {
    cin>>Numbers[i];
    }
    int sum=0;
    for(int i=0;i<=9;i++)
    {
        sum+=Numbers[i];
    }
    float avg=sum/10;
    cout<<"sum is = "<<sum<<endl;
    cout<<"avg is = "<<avg<<endl;
    return 0;
}