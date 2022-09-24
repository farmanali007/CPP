//type conversion from class to class by using operator keyword//uncomplete project///
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
    operator item()
    {
        return (m);
    }
};
class item
{
    private:
    int a,b;
    public:
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
    p1.setData(3);
    i1=p1;
    i1.showData();
    return 0;
}