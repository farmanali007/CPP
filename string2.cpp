#include<iostream>
using namespace std;
int main(){
    char name[10];
    name[0]= 'f';
    name[1]= 'a';
    name[2]= 'r';
    name[3]= 'm';
    name[4]= 'a';
    name[5]= 'n';
    name[6]= '\0';
    for(int i=0; i<=10; i++){
        cout<<name[i];
    }
    return 0;
}