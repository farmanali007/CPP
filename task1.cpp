// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c,i;
//     for(a=1;a<=100;a=a+10){
//         for(b=a;b<a+10;b++){
//             if(b%2==0){
//                 b=100-b;
//             }
//             cout<<b<<" ";
//         }
//         cout<<"\n";
//     }
    
// }
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    for(int i=1;i<100;i++){
        cout<<i<<"\n";
        a=100-i;
        cout<<a<<"\n";
    }
}