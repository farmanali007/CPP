#include<iostream>
using namespace std;
int main()
{
    int LuckyNumber[5];
    cout<<"enter a number";
    for(int i=0;i<=4;i++)
    {
        cin>>LuckyNumber[i];
    }
    for(int i=0;i<=4;i++)
    {
       // cout<<LuckyNumber[i]<<" ";//by using pointers we write this code as given below///
         cout<<*(LuckyNumber+i)<<" ";//use of pointer //
    }
    return 0;
}