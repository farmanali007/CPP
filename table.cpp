#include<iostream>
using namespace std;
int main(){
    int count, num;
    cout<<"enter number ";
    cin>>num;
    for(int i=1; i<=10; i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    return 0;
}
