#include<iostream.h>
#include<conio.h>
#include<string.h>
 class ComputerEngineering{

   public:
     int roll_no;
     char name[50],course[50];

  public :



	    void abc ()
      {
	cout<<"Enter Name "<<endl;
	cin>>name;
	cout<<"Enter Roll No"<<endl;
	cin>>roll_no;
	cout<<"Course"<<endl;
	cin>>course;

      }


      void  pqr()
      {
      cout<<name<<endl;

      cout<<roll_no<<endl;

     cout<<course<<endl;
    }
 };


    void main ()
   {
   ComputerEngineering c[3];
   int i;

    for(i=0;i<3;i++)
    {
    c[i].abc();
    }

    for(i=0;i<3;i++)
    {
    c[i].pqr();
    }



     getch();
   }


