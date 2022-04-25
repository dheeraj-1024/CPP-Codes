#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class book
{
 int book_id,price;
 public:
  void input();
  void output(); 
};

void book:: input()
{
  std::cout<<"Enter book_id , price \n";
  std::cin>>book_id>>price;
}
void book:: output()
{
  std::cout<<book_id<<"\n"<<price;
}

int main()
{
 book b1;
 b1.input();
 b1.output();
}
