#include<iostream.h>
#include<conio.h>

 class Intrest
 {
    float principal,duration;
    static float roi;

    public:
      void details()
      {
	cout << " Enter principal " << endl;
	cin >> principal;
	cout << endl;
	cout << " Enter duration in months " << endl;
	cin >> duration ;
	cout << " Enter ROI in p.c.p.a "<< endl;
	cin >> roi ;
	}

	 void calculate ()
	 {
	   cout << " Intrest  =   " << principal * duration * roi << endl;


	   }
	   };


     float Intrest :: roi;
       void main ()
       {
	 Intrest i;
	 i.details();
	 i.calculate();

	 getch();
	 }

