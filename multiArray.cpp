//new keyword sy banai gae array ki memoray deleter keyword use kr k release kerna zrori ha kun k newkey word array ka address send krta jo pointer ko 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int rows,colms;
    cout<<"rows,colms: ";
    cin>>rows>>colms;
    int**table=new int*[rows];
    for(int i=0;i<rows;i++){
        table[i]=new int[colms];
    }
    table[1][2]=88;
    for(int i=0;i<rows;i++){
        table[i]=new int[rows];
        delete[]table[i];
    }
    delete[] table;
    table=NULL;
    return 0;
}
