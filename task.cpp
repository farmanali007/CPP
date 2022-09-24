#include<iostream>
#include<string.h>
using namespace std;
int main(){
 
    string  result, str=",";
    char name[50];
    cout<<"enter your name";
    cin.getline(name,50);
    // cout<<name<<endl;
    for(int i =0; i<strlen(name); i++){
        if(i==0 || name[i] == ' ' || name[i-1]== ' '){
             result += name[i];
        }else{
             result += ",";
          result += name[i];
        }
      
    }
    cout<<result;
    // cout<<"size of string is "<< strlen(name)<<endl;


}