#include<iostream>
#include<string>
using namespace std;
int main()
{
    int year;
    cout<<"enter year";
    cin>>year;
    if(year%400==0|| (year%100!=0&& year%4==0))
    {
        cout<<"leap year";
    }
    else 
    cout<<" non leap year";
    return 0;
}



/*
int main()
{
    int i=0,year;
    cout<<"enter year";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            i=1;//cout<<year<<"is leap year";
            else
             i=0;//cout<<year<<"not leap year";

        }
        else
        i=1;//cout<<year<<" leap year";
    }
    else
        i=0;//cout<<year<<"not leap year";

        if(i==1)
        cout<<year<<"leap year";
        else
        cout<<year<<"not leap year";

     return 0;
    
}*/