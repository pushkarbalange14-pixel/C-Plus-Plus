#include<iostream.h>
#include<conio.h>
  class K{
    float m ;
    static float G;

     public:
       void calculate()
       {
	 cout << " Enter mass " << endl;
	 cin >> m ;
	 cout << endl;

	}
	 void cal(){
	  cout << " WEIGHT " << m*G<<endl;

	  }

	  };
	 float K::G=9.8;

     void main ()
     {
	K o;
	o.calculate();
	o.cal();
	getch();

	}







