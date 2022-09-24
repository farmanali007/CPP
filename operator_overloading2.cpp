#include<iostream>
class complex
{
    private:
    int a,b;
    public:
   void set_data(int x,int y)
   {
       a=x;
       b=y;
   }
   void show_data()
   {
       std::cout<<"a="<<a<<"b="<<b;
   }
   complex operator -()//uniary operator over loading//
   {
       complex temp;
       temp.a=-a;
       temp.b=-b;
       return (temp);
   }
};
int main()
{
    complex c1,c2;
    c1.set_data(3,4);
   // c2=c1.operator-();
 c2=-c1;//we explain it as c1 object call uniary operator(fun) "-" and which return a complex value in c2
    c2.show_data();
    return 0;
}