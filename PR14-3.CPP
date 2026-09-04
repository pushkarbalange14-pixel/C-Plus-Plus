#include <iostream.h>
#include <conio.h>


class Student
{
public:
    int roll;
    char name[100];

    void getStudent()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
    }
};

class Test : virtual public Student
{
public:
    int marks;

    void getMarks()
    {
        cout << "Enter test marks: ";
        cin >> marks;
    }
};

class Sports : virtual public Student
{
public:
    int score;

    void getScore()
    {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Test, public Sports
{
public:
    void display()
    {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll;
        cout << "\nTest Marks: " << marks;
        cout << "\nSports Score: " << score;
        cout << "\nTotal: " << marks + score << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.getScore();
    r.display();

    getch();
}
