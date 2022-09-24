#include<iostream>
class intiger
{
    private:
    int x;
    public:
    void set_data(int a)
    {
        x=a;
    }
    void show_data()
    {
        std::cout<<"x="<<x;
    }
    intiger operator ++()//pre increment
    {
        intiger i;
        i.x=++x;
        return (i);
    }
    intiger operator ++(int)//post increment operator take nothing itn is writen in the braces just because of diffrentiate b\w post and pre increment opertors
    {
        intiger i;
        i.x=x++;
        return (i);
    }

};
int main()
{
    intiger i1,i2,i3;
    i1.set_data(4);
    i1.show_data();
    i2=++i1;//preincement
    i2.show_data();
    i3=i1++;//post increment
    i3.show_data();
    return 0;
}
