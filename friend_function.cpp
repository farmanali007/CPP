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
    friend complex operator -(complex);//friend funtion is not not define in class but declered into calss body//

};
complex operator -(complex x) //define friend funtion
{
    complex temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return (temp);
}
int main()
{
    complex c1,c2;
    c1.set_data(3,4);
    c2=-c1;//c2=operator-(c1);
    c2.show_data();
    c1.show_data();
    return 0;
}
