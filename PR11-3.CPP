#include<iostream.h>
#include<conio.h>

class Student{

  public:
       int roll_no;
       char name[100];

};

class Marks:public Student
{
   public :
	int  m1,m2,m3;
	float per;


      void acc ()
      {
	cout<<" Enter name : "<<endl;
	cin>>name;
	cout<<" Enter Roll No : "<<endl;
	cin>>roll_no;
	cout<<" Enter marks for sub 1 "<<endl;
	cin>>m1;
	cout<<" Enter marks for sub 2 "<<endl;
	cin>>m2;
	cout<<" Enter marks for sub 3 "<<endl;
	cin>>m3;
      }

       void dis()
       {

       cout<<"Name:"<<name<<endl;
       cout<<"Roll No:"<<roll_no<<endl;
       cout<<"Marks 1:"<<m1<<endl;
       cout<<"Marks 2:"<<m2<<endl;
       cout<<"Marks 3:"<<m3<<endl;
       cout<<"Total = "<<m1+m2+m3<<endl;
       cout<<"Percentage = "<<(m1+m2+m3)/3;
       }
   };

void main ()
{

 Marks m;
 clrscr();
 m.acc();
 m.dis();
 getch();

 }













