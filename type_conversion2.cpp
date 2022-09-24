//type conversion from class type to permitive type//
//this conversion is possible by using casting operator//
//in this case constructors are not involed//
#include<iostream>
using namespace std;
class complex
{
   private:
   int a,b;
   public:
   operator int()//by using this casting operator we can convert class type to permitive type
   {
       return(a);
   }
   void setData(int x,int y)
   {
       a=x;
       b=y;
   }
   void showData()
   {
       cout<<"a="<<a<<"b="<<b<<endl;
   }
};
int main()
{
    complex c1;
    int x;
    c1.setData(3,4);
    c1.showData();
    x=c1;//type conversion from class type to permitive type 
    cout<<"x="<<x<<endl;
    return 0;
}