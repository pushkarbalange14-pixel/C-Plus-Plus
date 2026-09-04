#include<iostream.h>
#include<conio.h>

class Staff
{
public:
    int code_name;

    void staff()
    {
        cout << "Enter code number : " << endl;
        cin >> code_name;
        cout << endl << "Code Number : " << code_name << endl;
    }
};

class Teacher : virtual public Staff
{
public:
    char subject[200], publications[200];

    void teacher()
    {


        cout << endl << "Enter subject : " << endl;
        cin >> subject;

        cout << endl << "Enter Publications : " << endl;
        cin >> publications;

        cout << endl << "Subject : " << subject
             << endl << "Publications : " << publications << endl;
    }
};

class Officer : virtual public Staff
{
public:
    char grade[20];

    void officer()
    {


        cout << "Enter Officer Grade : " << endl;
        cin >> grade;

        cout << endl << "Grade : " << grade << endl;
    }
};

class Typist : virtual public Staff
{
public:
    char speed[50];

    void speed1()
    {


        cout << "Enter Speed : " << endl;
        cin >> speed;

        cout << endl << "Speed : " << speed << endl;
    }
};

class Regular : public Typist
{
public:
};

class Casual : public Typist
{
public:
    float daily_wages;

    void casual()
    {


        cout << "Enter the daily wages : " << endl;
        cin >> daily_wages;

        cout << endl << "Daily Wages : " << daily_wages << endl;
    }
};

void main()
{
    Staff s;
    Teacher t;
    Officer o;
    Typist j;
    Casual c;

    int choice;

    clrscr();

    cout << "CHOOSE OPTION WHOSE INFORMATION YOU WANT TO VIEW"<< endl << "1 - STAFF"<< endl << "2 - TEACHER"<< endl << "3 - OFFICER"<< endl<< "4 - TYPIST"<< endl<< "5 - CASUAL"<< endl;


    cin >> choice;

    switch(choice)
    {
        case 1:
            s.staff();
            break;

        case 2:
            t.teacher();
            break;

        case 3:
            o.officer();
            break;

        case 4:
            j.speed1();
            break;

        case 5:
            c.casual();
            break;

        default:
            cout << "Invalid" << endl;
            break;
    }

    getch();
}
