#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int(*funptr)(int,int)=add;
    cout<<add(3,4)<<endl;
    cout<<funptr(3,4)<<endl;
    return 0;
}