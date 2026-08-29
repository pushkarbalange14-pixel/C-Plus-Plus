/* employee , emp id , emp name
emp_union member id
emp info basic salary */
#include<iostream.h>
#include<conio.h>

class employee{

     public:
	    int emp_id;
	    char emp_name[50];
  };

class emp_union{

	public:
	       int member_id;
};

class emp_info:public employee,public emp_union{

      public:
	  float basic_salary;



      public:
	     void data()
	{

	       cout<< " Enter Employee ID "<<endl;
	       cin>>emp_id;
		cout<<endl<< " Enter Employee  Name "<<endl;
	       cin>>emp_name;
		cout<<endl<< " Enter Member ID "<<endl;
	       cin>>member_id;
		cout<<endl<< " Enter Basic Salary  "<<endl;
	       cin>>basic_salary;
		cout<<endl<<emp_id<<endl<<emp_name<<endl<<member_id<<endl<<basic_salary<<endl;

	  }

    };


  void main ()
  {

  emp_info e;
  clrscr();
  e.data();
  getch();

  }








