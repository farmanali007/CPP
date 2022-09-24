#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length, width;
    public:
    void setDimensions(int l,int w)
    {
        length=l;
        width=w;
    }
    /*void showDimensions()
    {
        cout<<"length and width of rectangle is "<<length<<endl<<width;
    }*/
    int getArea(int length,int width)
    {
        return(length*width);
    }
    int getPeremeter(int length,int width)
    {
        return(2*(length*width));
    }
    int getlength()
    {
        int l;
        cout<<"enter length";
        cin>>l;
        return (l);
    }
    int getwidth()
    { 
        int w;
        cout<<"enter width";
        cin>>w;
        return (w);
    }
};
   int main()
   {
       rectangle *ptr=new rectangle;//rectangle r1;
       int l=ptr->getlength();//int l=r1.getlength();
       int w=ptr->getwidth();//int w=r1.getwidth();
       ptr->setDimensions(l,w);//r1.setDimensions(l,w);
       //r1.showDimensions();
       cout<<"\narea of rectangle: \n";
       int a=ptr->getArea(l,w);//int a=r1.getArea(l,w);
       cout<<a;
       cout<<"\nperemeter of rectangle\n";
       int p=ptr->getPeremeter(l,w);//r1.getPeremeter(l,w);
       cout<<p<<endl;
       return 0;
   }