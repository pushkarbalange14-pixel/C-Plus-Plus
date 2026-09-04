#include <iostream.h>
#include <conio.h>


class Cricketer
{
public:
    char name[100];

    void getName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Bowler : virtual public Cricketer
{
public:
    void bowl()
    {
        cout << name << " is a Bowler." << endl;
    }
};

class Batsman : virtual public Cricketer
{
public:
    void bat()
    {
        cout << name << " is a Batsman." << endl;
    }
};

class AllRounder : public Bowler, public Batsman
{
public:
    void display()
    {
        cout << name << " is an All Rounder." << endl;
    }
};

void main()
{
    AllRounder a;

    a.getName();
    a.display();
    a.bowl();
    a.bat();

    getch();
}
