/* class employee dm empid empcode
   class programmer skill
   class manager department
   */
#include<iostream.h>
#include<conio.h>

class Employee{
     public:
       long emp_id,empcode;
};
class Programmer: virtual public Employee{
    public:
	char skills[600];

};
class Manager:    virtual public Employee{
    public:
       char department[50];
};
class Data:public Programmer , public Manager{

   public:
   int i;

      void get_data()
      {
	 cout<< " Enter Employee ID :"<<endl;
	 cin>>emp_id;
	 cout<<endl<< " Enter Employee Code :"<<endl;
	 cin>>empcode;
	 cout<<endl<< " Enter Number of Skills of Programmer knows :"<<endl;
	 cin>>skills;


	 cout<<endl<< " Enter department for Manager:"<<endl;
	 cin>>department ;
	 cout<<endl;
      }

      void display()
      {
	 cout<< " Employee ID : ";
	 cout<<emp_id;
	 cout<<endl<< " Employee Code : ";
	 cout<<empcode;
	 cout<<endl<< " Number of Skill the  Programmer knows :";
	 cout<<skills;


	 cout<<endl<< " Ddepartment of Manager:";
	 cout<<department ;
      }

  };

 void main()
 {
   Data d;
   clrscr();
   d.get_data();
   d.display();
   getch();
 }













