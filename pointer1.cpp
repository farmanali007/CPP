#include<iostream>
using namespace std;
int main()
{
    int n=3;
    cout<<n<<endl;
    cout<<&n<<endl;
    int *ptr=&n;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}