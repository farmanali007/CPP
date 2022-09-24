#include<iostream>
using namespace std;
class Time
{
     private:
     int HR,MIN,SEC;
     public:
     void setTime(int h,int m,int s)
     {
         HR=h;
         MIN=m;
         SEC=s;
     }
     void showTime()
     {
         cout<<"\n\n"<<HR<<":"<<MIN<<":"<<SEC<<endl;
     }
     void normalize()
     {
         MIN=MIN+SEC/60;
         SEC=SEC%60;
         HR=HR+MIN/60;
         MIN=MIN%60;
     }
     int getH()
     {
         cout<<"enter hours";
         int h;
         cin>>h;
         return(h);
     }
     int getM()
     {
         cout<<" enter mints";
         int m;
         cin>>m;
         return (m);
     }
     int getS()
     {
         cout<<"enter sec";
         int s;
         cin>>s;
         return (s);
     }


};
  int main()
  {
      Time t;
      int hr=t.getH();
      int min=t.getM();
      int sec=t.getS();
      t.setTime (hr,min,sec);
      cout<<"\nbefore normalize\n";
      t.showTime();
      t.normalize();
      cout<<"\nafter normalization\n";
      t.showTime();
      return 0;
  }
