#include <iostream.h>
#include <conio.h>


class Student
{
public:
    Student()
    {
        cout << "Base class constructor" << endl;
    }
};

class Result : public Student
{
public:
    Result()
    {
        cout << "Derived class constructor" << endl;
    }
};

void main()
{
    Result r;


    getch();
}
