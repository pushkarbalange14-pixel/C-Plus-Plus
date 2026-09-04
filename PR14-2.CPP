#include <iostream.h>
#include <conio.h>

class Employee
{
public:
    char name[100];
    int code;

    void getEmployee()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter code: ";
        cin >> code;
    }
};

class Account : virtual public Employee
{
public:
    float basicPay;

    void getBasicPay()
    {
        cout << "Enter basic pay: ";
        cin >> basicPay;
    }
};

class Admin : virtual public Employee
{
public:
    int experience;

    void getExperience()
    {
        cout << "Enter experience: ";
        cin >> experience;
    }
};

class GrossSalary : public Account, public Admin
{
public:
    void display()
    {
        float gross = basicPay + (experience * 1000);

        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Code: " << code;
        cout << "\nBasic Pay: " << basicPay;
        cout << "\nExperience: " << experience << " years";
        cout << "\nGross Salary: " << gross << endl;
    }
};

void main()
{
    GrossSalary e;
    clrscr();

    e.getEmployee();
    e.getBasicPay();
    e.getExperience();
    e.display();

    getch();
}
