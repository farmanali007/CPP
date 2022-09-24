#include<iostream>
#include<string.h>//decleration of strcpy funtion
#include<string>//in this file declaration of string class
using namespace std;
int main()
{  
      // char s[20];
    //strcpy(s,"farman");//we use this method which is as same as c language
string s3;
  // string s1="hello";//but in c++ we are prefered this method which is more relaible end easy
   string s1("hello");//this is another method to write in string 
        string s2=" farman";
 s3=s1+s2;//in this method we perform + operation but in array we can not performed this operation

    cout<<s1<<endl<<s2<<endl<<s3<<endl;
    return 0;
}