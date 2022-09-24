#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b)
    return a;
    return b;
}
int main(){
    int x =2, y=8;
    int result = max(x++,y++);
    cout<<" x = "<<x<<" = "<<y;
    return 0;
}