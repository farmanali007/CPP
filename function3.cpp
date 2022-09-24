#include<iostream>//example: funtioni call by refrence
int sum(int&,int&);
int main()
{
    int a,b;
    std:: cout<<"enter two numbers";
    std::cin>>a>>b;
    int s=sum(a,b);
    std::cout<<"sum is"<<s;
    return 0;
}
int sum(int &x,int&y)
{
    return(x+y);
}