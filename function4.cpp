#include<iostream>//default argument//
int sum(int,int,int=0);
int main()
{
    int a,b,c;
    std::cout<<"enter two numbers";
    std::cin>>a>>b;
    std::cout<<sum(a,b);
    std::cout<<"enter three wo numbers";
    std::cin>>a>>b>>c;
    std::cout<<sum(a,b,c);
    return 0;
}
int sum(int x,int y,int z)
{
    return(x+y+z);
}