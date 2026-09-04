#include <iostream.h>
#include <conio.h>


class Account
{
public:
    int accNo;
    char name[100];

    void getAccount()
    {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter name: ";
        cin >> name;
    }
};

class Saving_Acc : virtual public Account
{
public:
    float saving;

    void getSaving()
    {
        cout << "Enter saving amount: ";
        cin >> saving;
    }
};

class Current_Acc : virtual public Account
{
public:
    float current;

    void getCurrent()
    {
        cout << "Enter current amount: ";
        cin >> current;
    }
};

class Fixed_Depo : public Saving_Acc, public Current_Acc
{
public:
    void display()
    {
        cout << "\nAccount Number: " << accNo;
        cout << "\nName: " << name;
        cout << "\nSaving Amount: " << saving;
        cout << "\nCurrent Amount: " << current;
        cout << "\nTotal Amount: " << saving + current << endl;
    }
};

int main()
{
    Fixed_Depo f;

    f.getAccount();
    f.getSaving();
    f.getCurrent();
    f.display();

    getch();
}
