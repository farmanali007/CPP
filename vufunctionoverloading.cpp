/* Overload functions to print variables of different types */
#include <iostream>
using namespace std;
void print (int i)
{
cout << "\nThe value of the integer is: " << i;
}
void print (double d)
{
cout << "\nThe value of the double is: " << d;
}
void print (char* s)
{
cout << "\nThe value of the string is: " << s;
}
main (void)
{
int i = 100;
double d = 123.12;
char *s = "This is a test string";
print ( i );
print ( d );
print ( s );
}