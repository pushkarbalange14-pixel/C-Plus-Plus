#include<iostream.h>
#include<conio.h>

class first{

   public:
       int m1,m2,m3;
  };

class second{

   public:
      int m4,m5,m6;

  };

class average:public first,public second{

  public:



      void average1()
      {
	 cout<<" Enter marks "<<endl;
	 cin>>m1;
	 cout<<endl<<" Enter marks "<<endl;
	 cin>>m2;
	 cout<<endl<<" Enter marks "<<endl;
	 cin>>m3;
	 cout<<endl<<" Enter marks "<<endl;
	 cin>>m4;
	 cout<<endl<<" Enter marks "<<endl;
	 cin>>m5;
	 cout<<endl<<" Enter marks "<<endl;
	 cin>>m6;

	 cout<< " AVERAGE = "<<(float)(m1+m2+m3+m4+m5+m6)/6<<endl;

       }

    };


 void main ()
 {

   average a;
   clrscr();
   a.average1();
   getch();
 }


