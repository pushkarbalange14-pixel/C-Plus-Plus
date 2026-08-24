#include<stdio.h>
#include<iostream.h>
#include<conio.h>
 class Demo{

   public:
   int num1,num2;

   public:
       Demo()
       {
       num1=10;
       num2=20;
       cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
       }
   };

  void main ()
  {
    Demo d;
    cout<<" Constructor called " <<endl;

   getch();

   }




