#inlcude<memory>
#include<iostream>
using namespace std;
int main()
{
    unique_ptr<int>unptr1=make_unique<int>(34);
    cout<<uintptr1<<endl;
    return 0;
}