#include<iostream>
using namespace std;
int getNumber();
int getNumber()
{
    return 5;
}
int main()
{
    cout<<getNumber();//this out gives us value which function return 
    cout<<getNumber;// this out put gives us address of funtion
    return 0;
}