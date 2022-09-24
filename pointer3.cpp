#include <iostream>
using namespace std;
void printNubmer(int *);
void printNumber(char *);
void printNumber(int *p)
{
    cout << *p << endl;
}

void printLetter(char *q)
{
    cout << *q << endl;
}

int main()
{
    int number = 5;
    char letter = 'a';
    cout << &number << endl;
    printNumber(&number);
    cout << &letter << endl;
    printLetter(&letter);
    return 0;
}