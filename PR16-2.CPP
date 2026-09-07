#include <iostream.h>
#include <conio.h>

class Box{
  public:
    double length,height,breadth;

    void input()
    {

    cout<<"Length ";cin>>length;
    cout<<endl<<"Breadth ";cin>>breadth;
    cout<<endl<<"Height ";cin>>height;
    cout<<endl<<endl;


    }
    void area()
    {
    cout<<endl<<"Area = "<<length*breadth<<endl;
    }

    void volume()
    {
    cout<<"Volume = "<<length*breadth*height<<endl;
    }

 };

 void main()
 {
   Box b;
   Box  *b1;
   clrscr();
   b1=&b;
   b1->input();
   b1->area();
   b1->volume();

   getch();

 }