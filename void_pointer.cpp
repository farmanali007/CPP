#include<iostream>//void pointer a special pointer which take address of any data type. like int ,double ,float etc.
using namespace std;
 void print(void* ptr,char type)
 {
     switch (type)
     {
     case 'i':cout<<*((int*)ptr)<<endl;break;
     case 'c': cout<<*((char*)ptr)<<endl;break;
     
     default:
         break;
     }
 }
int main()
{
    int number=3;
    char letter='a';
    print(&number,'i');
    print(&letter,'c');
}