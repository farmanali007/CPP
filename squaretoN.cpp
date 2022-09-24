#include<iostream>
using namespace std;
double RaseToPow(double, int);
int main(){
    double x;
    int pow;
    cout<<"Enter base "<<endl;
    cin>>x;
    cout<<"Enter pow "<<endl;
    cin>>pow;
    cout<<"Result is : "<<RaseToPow(x, pow);
   
}
double RaseToPow(double x, int pow){
    int result = 1.0;
    int i;
    for(i=1; i<=pow; i++){
        result *= x;
    }
    return (result);
}