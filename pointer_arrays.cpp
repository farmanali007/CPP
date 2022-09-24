//==>array ka phla member ka address hi ak array ka address hota h
//====>//array ka name print krwana==aray ka address print krwana==first member ka address print krwana//
#include<iostream>
using namespace std;
int main()
{
    int luckyNumbers[5];//={1,2,4,3,5};
    cout<<luckyNumbers<<endl;//it means array's name behave like pointer bcz it have address of array
    cout<<&luckyNumbers[0]<<endl;
  /*3*/  cout<<luckyNumbers[2]<<endl;//it means []is de-addressing operator for aarray which gives value of array at that index//
    /*4*/cout<<*(luckyNumbers+2)<<endl; //array k phly index k address mn do adresses or add kro or usko ko * ka istmal kr k de-addressing kr k print krwa lia mtlb  3rd index ki value print hogi
    return 0;
}