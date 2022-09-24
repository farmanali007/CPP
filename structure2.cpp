// #include<iostream>//we can define funtion in structure//
// struct book
// {
//     //private:// member of structure after this key word are not acess without input funtion.
//     int bookid;
//     char title[23];
//     float price;
//    // public://after this keywrord we can acess member funtion of structure from main funtion
//     void input()
//     {
//           std::cout<<"enter bookid tile and price";
//         std::cin>>bookid>>title>>price;//because input is inside structure so he can aproach any member of structure because of this reason we leave () empty.
//     }
//     void display()
//     {
//         std::cout<<bookid<<" "<<title<<" "<<price;
//     }
// };
// int main()
// {
//     book b;//in opp b veriable is known as object//
//     b.input();
//     b.display();
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int b,a=35;
    b=a%2;
    cout<<b;
    return 0;
}