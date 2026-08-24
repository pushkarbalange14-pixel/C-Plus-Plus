#include<iostream.h>
using namespace std ;

int main ()
{

  int a,b,temp;
cin >> a >> b ;
cout << a << b;
temp=a;
a=b;
b=a;

cout << " After swapping" <<endl << " a = " << a << " b ="<< b<< endl;
return 0;
}
