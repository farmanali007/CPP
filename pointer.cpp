#include<iostream>
using namespace std;
class box
{
   int l,b,h;
   public:
   void set_data(int x,int y,int z)
   {
       l=x;
       b=y;
       h=z;
   }
     void show_data()
    {
        cout<<"l="<<l<<"b="<<b<<"h="<<h<<endl;
    }
};
int main()
{
    box*p, smallbox;
    p=&smallbox;
    p->set_data(4,5,6);//smallbox.set_data(4,5,6);
    p->show_data();//smallbox.show_data();
    return 0;
}