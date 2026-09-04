#include<iostream.h>
#include<conio.h>

class Staff{
    public:
     int code;
};
class Teacher :virtual public Staff{
    public:
       char subject[100];
       void get1()
       {
       cout<<" Enter code subject "<<endl;
       cin>>code>>subject;
       cout<<endl<<code<<subject;

       }
};
class Officer:public virtual  Staff{
  public:
   char grade[20];
	    void get2()
	    {
	    cout<<endl<<" Enter grade : "<<endl;
	    cin>>grade;
	    cout<<endl<<grade;
	    }
     };
     void main()
     {
	      Teacher t;
	      Officer o;
	      clrscr();
	      t.get1();
	      o.get2();
	      getch();
     }




