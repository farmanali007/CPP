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
   //complex add(complex c)
   complex operator +(complex c)
   {
       complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return (temp);
   }
};
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
   // c3=c1.add(c2);we can also use the name of add funtion and writen same as given befor
  // c3=c1.operator+(c2);//we can also give funtion namaeas"+" but before this we use key word (operator)
  c3=c1+c2;//meaning of this technique is as same as above two technique just difference in writing 
    c3.show_data();
    return 0;
}