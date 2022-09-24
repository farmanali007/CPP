// example: function call  by adress
#include<iostream>
int sum(int*,int*);
int main()
{
    int a,b;
    std:: cout<<"enter two numbers: ";
    std:: cin>>a>>b;
    int s=sum(&a,&b);
    std:: cout<<"sumis"<<s;
    return 0;
}
int sum(int *p,int *q)
{
    return(*p+*q);
}