#include <iostream.h>
#include <conio.h>

class Book{
  public:

  char book_name[100];
  char author_name[100];
  double price ;
    void details()
    {
    cout<<"Book Name ? "<<endl<<"Author Name ? "<<endl<<"Price  ? "<<endl;
    cin>>book_name>>author_name>>price;
     cout<<"Book Name :"<<book_name<<endl<<"Author Name :"<<author_name<<endl<<"Price :"<<price<<endl;
   cout<<endl<<endl;

    }

  };

  void main()
  {
    Book b;
    Book *ptr;
    ptr=&b;
    b.details();
    ptr->details();
    getch();


  }