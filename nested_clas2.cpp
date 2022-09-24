#include<iostream>
#include<cstring>
using namespace std;
class student
{
    private:
    int rollno;
    char name[20];
    class address
    {
        private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
        public:
        void setaddress(int h,char *s,char *c,char *st,char *p)
        {
            houseno=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void showaddress()
        {
            cout<<"\t\t\taddress:house no,"<<houseno<<","<<street<<","<<city<<","<<state<<",pincode "<<pincode<<endl;
        }
    };
     address add;
    public:
    void setrollno(int r)
    {
        rollno=r;
    }
    void setname(char *n)
    {
        strcpy(name,n);
    }
    void setaddress(int h,char*s,char *c,char *st,char *p )
    {
        add.setaddress(h,s,c,st,p);
    }

    void showStudent()
    {
        cout<<"\n\n\n\t\t\tStudent Data"<<endl;
       cout<<"\t\t\t rollno="<<rollno<<endl<<"\t\t\tname= "<<name<<endl;
        add.showaddress(); 
    }  

};
int main()
{
    student s1;
    s1.setrollno(10);
    s1.setname("farmanali");
    s1.setaddress(301,"harvard street","chowk Azam","punjab","3432323");
    s1.showStudent();
     return 0;
}