#include<iostream>
class complex
{             //in class all member of calss are by default privat///
    int a,b;//in structure all member of structure are by default public///
    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        std::cout<<"a="<<a<<"\nb="<<b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);

    }
};
int main()
{
  complex c1,c2,c3;//c1 is called object of class 'complex'//
  c1.set_data(2,5);
  c2.set_data(3,5);
  c3=c1.add(c2);
  c3.show_data();
  return 0;
  
}