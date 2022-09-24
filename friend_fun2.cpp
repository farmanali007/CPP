#include<iostream>//rriend can acess members of more than one class 
class B; 
class A
{  
    private: 
   int a;
   public:
   void set_data(int x)
   {
       a=x;
   }
   friend void fun(A,B);
};
class B
{
    int b;
    public:
    void set_data(int y)
    {
        b=y;
    }
    friend void fun (A,B);
};
void fun(A q,B p)
{
  std::cout<<"sum is"<<q.a+p.b;
}
int main()
{
    A obj1;
    B obj2;
    obj1.set_data(10);
    obj2.set_data(7);
    fun(obj1,obj2);
   return 0;
}