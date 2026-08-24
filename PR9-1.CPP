#include<iostream.h>
#include<conio.h>

 class Account{

   public :
       int Account_no;
       float Balance;

   public:
	 void accept()
	 {
	  cout << endl<< " Enter Your Account number  and Balance:"<<endl;
	  cin >>Account_no>>Balance;

	 }
	 void display()
	 {
	  if(Balance>10000)
	  {
	    cout << " Account No : " <<Account_no<<endl;
	    cout << " Balance " << Balance <<endl;

	  }
	 }
	 };

     void main ()
     {
       Account a[50];
       int i;

       for(i=1;i<=10;i++)
       {
	a[i].accept();
	}

	cout << " The Accounts having balance more than 10000 are : " <<endl;
       for(i=1;i<=10;i++)
       {
	a[i].display();
       }


       getch();

       }

