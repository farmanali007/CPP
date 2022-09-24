#include<iostream>
#include<string>
struct book
{
    int bookid;
    char title[20];
    float price;
};
book input();
void display(book);
int main()
{ 
     book b1;
    std::cout<<"enter bookid,book title,book price";
  b1=input();
  display(b1); 
  return 0;
}
book input()
{
    book b;
    std::cin>>b.bookid>>b.title>>b.price;
    return(b);

}
void display(book b)
{
    std::cout<<b.bookid<<" "<<b.title<<" "<<b.price;
}
