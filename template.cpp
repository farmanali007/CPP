#include<iostream>
using namespace std;
template <class X>void big (X x,X y )//template funtion//
//if we want to re_use this funtion named as big for different data types then we make it template funtion.The benifit of this funtion is that when we call big funtion form main funtion by passing value\arguments of different types for example int,float,double etc. then template funtion designed it self into those form of data type which is passed by big funtion from main funtion.
{
    if(x>y)
    {
        cout<<x;
    }
    else
    cout<<y;
}
int main()
{
    big(3,4);
    big(3.5,5.6);
    return 0;
}