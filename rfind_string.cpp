#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="farman ali gorayyah jutt, farman ali gorayyah jutt";
int i=s.rfind("ali");//ye reverse find function ha// is mn hm jo string passs kryn gy rfind function usko reverse side sy find kr k usk phly letter ka index no btye ga
//int i=s.find("ali");//agr hm ali lafz find fuction mn pass krty hn to find funtion hmre string mn jo phla ali hoga(left side sy) wo find kr uska index return kry ga //////lakin jb yhi string (ali)  hm rfind function mn pass krty hn tw wo reverse side sy(right side sy) jo phla ali ha uska index send kry ga 
cout<<i<<endl;
return 0;

}