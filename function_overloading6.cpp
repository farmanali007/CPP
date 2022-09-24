#include<iostream>
using namespace std;
float area(int);
float area(int,int);
int main()
{
    int r,l,b;
    cout<<"enter radius of circle";
    cin>>r;
    cout<<"radius of circle is "<<area(r);
    cout<<"enter lenght and width or rectangle";
    cin>>l>>b;
    cout<<"area of ractangle is "<<area(l,b);
    return 0;
}
   float area(int r)
   {
    return(3.1416*r*r);
   }
   float area(int l,int b)
  {
    return(l*b);
  }