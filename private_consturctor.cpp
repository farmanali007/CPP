#include<iostream>//agre constructor ko private mn bnaya jaye tw hm object ko main function mn nahi bna skyn gy//is k solution k tor py hm object ko b class k ander bnyn gy ak function bna phr us function ko main function sy bgair object k call krny k liye static function mn convert kr dyn gy functin sy phly static keyword likh k. 
#include<string>
#include<string.h>
using namespace std;
class Admin
{    
    private:
    char adminName[39];
    char adminPassword[34];
    Admin()//here consturctor is private//
    {
        strcpy(adminName,"farman");
        strcpy(adminPassword,"###007");
    }
    public:
    void showData()
    {
        cout<<endl<<"admin name: "<<adminName<<endl<<"password: "<<adminPassword<<endl;
    }
    static Admin* getinst()
    {
        Admin *p=new Admin;
        return(p);
    }

};
int main()
{
    Admin *ptr;
    ptr=Admin::getinst();//yahan hm getinst funtion ko bgair obj k call kr rhy hn or getinst functin hmyn object bna k uska adress pass kr rha ha jo hmny ptr pointer mn rakh lia ha isi pointer ki madad sy pher hm show data yh baki jitny b functins hn unko acess kr lyn gy
    ptr->showData();
    return 0;
}