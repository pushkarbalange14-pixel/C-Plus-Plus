#include <iostream.h>
#include <conio.h>

class Book{
  public:

    void details(char book_name[100],char author_name[100],double price)
    {

     cout<<"Book Name :"<<book_name<<endl<<"Author Name :"<<author_name<<endl<<"Price :"<<price<<endl;
   cout<<endl<<endl;

    }

  };

  void main()
  {
    Book b;
    Book *ptr;
    ptr=&b;
    ptr->details("Wings_of_Fire","Vinayak_Dixit",254.43);
    getch();


  }