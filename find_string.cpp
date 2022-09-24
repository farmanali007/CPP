#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="farman ali gorayyah";
    int i=s.find("ali");//find function sy hm string mn mojod koi b word find krwa skty hn//find funtioni mn hm argument k tor py ak string pass krty jo hm find funtion sy find krwana chahty hn ager wo word\string us string mn hoga tw find funtion hmyn usk phly letter ka index no return kr dy ga or usko hm ak int veriable i mn assign krwa lyn gy ager wo word\string jo hm ny find funtion mn pass ki ha wo hmare string mn na hua to find function hmyn -1 return kr dy ga
     //  int i=s.find("jutt"); kun k hmare string mn jutt lafz nahi the is liye find function ny -1 return kiya
    cout<<i<<endl;
    return 0;
}