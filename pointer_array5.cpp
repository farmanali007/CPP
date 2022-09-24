#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"size: ";
    cin>>size;
    int* myArray= new int[size];
    for(int i=0;i<size;i++)
    {
          cout<<"array["<<i<<"]";
          cin>>myArray[i];
    } 
    for(int i=0;i<size;i++)
    {
        //cout<<myArray[i]<<" ";[] is symbol also de-refrenssing the areay 
        cout<<(*myArray)+i<<" ";//this method is used to de-refrenssing the array means 
    }
    delete[]myArray;
    myArray=NULL;
    return 0;
}