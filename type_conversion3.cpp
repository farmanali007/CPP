//type conversion from class to class by using constructor method//
#include<iostream>
using namespace std;
class product 
{
    private:
    int m,n;
    public:
    void setData(int x,int y)
    {
        m=x;
        n=y;
    }
    void showData()
    {
        cout<<"m="<<m<<"n="<<n;
    }
    int getM()//we define a funtion"getA" which return value of a
    {
        return(m);
    }
    int getN()//we define a funtion "getB" which return value of b
    {
        return (n);
    }
};
class item
{
    private:
    int a,b;
    public:
     item ()
     {

     }
     item (product p)
     {
         a=p.getM();//here we can not acess m and n by using p.n\p.m because n and m are product class members 
         b=p.getN();
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
    item i1;
    product p1;
    p1.setData(3,5);
    i1=p1;
    i1.showData();
    return 0;
}