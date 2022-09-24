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
};
int main()
{
  complex c1;//c1 is called object of class 'complex'//
  c1.set_data(2,5);
  c1.show_data();
  return 0;
  
}