#include<iostream.h>
#include<conio.h>

class Employee
   {
     public :
	long e_no;
	char e_name[50],e_dsig[100];
    };

 class Salary:public Employee
   {
   public :
       long basic,da,hra,gross_sal;

       void acc()
       {
       cout<< " Enter Employee Name " <<endl;
       cin>> e_name;cout<<endl;
       cout<< " Enter Employee NO : "<<endl;
       cin>>e_no;cout<<endl;
       cout<< " Enter Employee Designation : " <<endl;
       cin>>e_dsig;cout<<endl;
       cout<< " Enter basic salary : " <<endl;
       cin>>basic;cout<<endl;
       cout<< " Enter daily allowance : " <<endl;
       cin>>da;cout<<endl;
       cout<< " Enter Home Reallowance : " <<endl;
       cin>>hra;cout<<endl;
       }
	void display()
	{

       cout<<endl<< "  Employee Name :" <<e_name<<endl;

       cout<< "  Employee NO : "<<e_name<<endl;

       cout<< "  Employee Designation : " <<e_dsig<<endl;

       cout<< "  Basic salary : " <<basic<<endl;

       cout<< "  Daily Allowance : " <<da<<endl;

       cout<< "  Home Reallowance : " <<hra<<endl;
       cout<< "  Gross Salary : "<<basic+da+hra<<endl;


	}
   };



  void main ()
  {

  Salary s;
  s.acc();
  s.display();
  getch();


  }











