//type conversion permitive to class in c++//
//Permitive type to class type can be implemented through constructor
#include<iostream>
using namespace std;
class complex
{
   private:
   int a,b;
   public:
   //constructor with no arguments is define because default consturctor is not define by complier in this case just bcz of we define a consturctor with arguments now every constructor make by your self
   complex()  
   {

   }
   complex(int x)//consturctor with arguments is define for type conversion
   {
        a=x;b=0;
   }
   void setData(int x,int y)
   {
       a=x;
       b=y;
   }
   void showData()
   {
       cout<<"a="<<a<<"b="<<b;
   }
};
int main()
{
    complex c1;
    int x=3;
    c1=x;//just for understanding we can asume it as//c1.consturctor(x);
    c1.showData();
    return 0;
}