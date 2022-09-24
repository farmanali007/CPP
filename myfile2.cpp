#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void copyfile(char *p,char *q);
int main()
{
    copyfile("myfile.txt","myfile2.txt");
    cout<<"file copy is completed";
   return 0;
}
void copyfile(char *p,char *q)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(p);
    fout.open(q);
    ch=fin.get();
    while (!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}


