#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i==4)
        continue;
    }
    cout<<"\n"<<i;
    return 0;
}


/*
int main
{
    int i;
    for (i=0;i<10;i++) 
    {
       if(i==4)
         {
             continue;
         }
  cout<<i<<"\n";
}
return 0;
}*/