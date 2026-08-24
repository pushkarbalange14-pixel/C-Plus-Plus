#include<iostream.h>
#include<conio.h>

class Furniture{

 public :
     char material[500];
     float price;

   };


class Table:public Furniture{

public :
       int height;
       char surface[500];

	 void info()

      {
       cout << " Enter material name char " <<endl;
       cin>> material;
       cout<< "  Enter the price " <<endl;
       cin>>price;
       cout<<"   Enter height " <<endl;
       cin>>height;
       cout<< "  Enter surface  char "<<endl;
       cin>>surface;
      }


      void display()
      {

      cout<<material<<endl<<price<<endl<<height<<endl<<surface<<endl;

      }

};

void main()
{

   Table t;
   int i,n;
   clrscr();
      t.info();
      t.display();

      getch();

      }




