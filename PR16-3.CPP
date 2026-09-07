#include <iostream.h>
#include <conio.h>

class Birthday{
   public:
     char b_day[20];

     void get()
     {
     cout<<endl<<" Enter your Birthdate : "<<endl;
     cin>>b_day;
     cout<<endl;
     cout<<endl<<b_day;
     }

 };

 void main()
 {
  Birthday u;
  Birthday * b;
  clrscr();
  int i;
  b=&u;
  for(i=0;i<4;i++)
  {
  cout<<endl<<endl<<" The Birtdate of Student "<<i+1<<" is "<<endl;
  b->get();
  }
  getch();

 }

