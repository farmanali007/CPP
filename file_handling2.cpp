#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fin;
    char ch;
    fin.open("myfile.txt",ios::in);
    ch=fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
    return 0;
}