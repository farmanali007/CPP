//funtion overloading means we can create two functin of the same name compiler can find out at the time of compilation which one of those function is execute.
#include<iostream>
int area(int,int);
float area(int);
int main()
{
    int r,l,b;
    std::cout<<"enter redius of circle";
    std::cin>>r;
    std::cout<<"area of circle is "<<area(r);
    std::cout<<"\nenter length and birdth of rectangle\n";
    std::cin>>l>>b;
    std::cout<<"area of a rectangle is "<<area(l,b);
    std::cout<<"\n";
    return 0;
}
float area(int R)
{
    return(3.14*R*R);
}
int area(int x,int y)
{
    return(x*y);
}