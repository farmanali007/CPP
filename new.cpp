#include<iostream>
using namespace std;
class box
{
   int l,b,h;
   public:
   void set_data(int l,int b,int h)
   {
       this->l=l;//this-> is pointer which contain the adress of caller(which call the set_data)object/ 
      this->b=b;//by using this-> pointer we specifies left side 'l' is instance's\object's "l"and right side's 'l' is set_data's "l"//
       this->h=h;
   }
     void show_data()
    {
        cout<<"l="<<l<<"b="<<b<<"h="<<h<<endl;
    }
};
int main()
{
    box *ptr=new box;//box smallbox;
    ptr->set_data(4,5,6);//smallbox.set_data(4,5,6);
    ptr->show_data(); //smallbox.show_data();
    return 0;
}