#include<iostream.h>
#include<conio.h>

class Area{
  public:
      void area(float length, float breadth)
      {
      cout<< " AREA = "<<length*breadth<<endl;

      }
 };

 class Perimeter{
   public:
	void perimeter(float length , float breadth)
	{
	 cout<<" PERIMETER "<<2*(length+breadth)<<endl;
	}
    };


class Rectangle:public Area,public Perimeter{

    public:
	float length, breadth;


       public:
	  void get()
	  {

	  cout<< " Enter length and breadth respectively"<<endl;
	  cin>>length>>breadth;

	  }


	  void show()
	  {
	    cout<< " The length is : "<<length<<endl<<" The breadth is : "<<breadth<<endl;
	    area(length,breadth);
	    perimeter(length,breadth);

	  }

    };



 void main()
 {
     Rectangle r;
     clrscr();
     r.get();
     r.show();
     getch();

 }





