#include<iostream>
#include<fstream>
using namespace std;
int main()
{                   //file opening modes are iso::out  for writing into file//this mod is by default
    fstream fout;// fstream is class ///     ios::in for reading content of file on consol
    fout.open("myfile.txt",ios::out);//ios::app for writing into file without erasing  
     fout<<"Eng. Farman Ali Gorayyah";
     fout.close();
     return 0;
}