#include<iostream>
#include<string>
using namespace std;
void print(int*);
void print(int *p)
{
    cout<<*p<<endl;
}
int main()
{
    int n=5;
    cout<<&n<<endl;
    print(&n);
    cout<<n;
    return 0;
}