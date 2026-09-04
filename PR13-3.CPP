#include<iostream.h>
#include<conio.h>

class Player
{
public:
    char name[50];
    int matches;

    void display()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter number of matches player played: ";
        cin >> matches;

        cout << "\nName = " << name << endl;
        cout << "Matches = " << matches << endl;
    }
};

class Batsman : virtual public Player
{
public:
    int total_score;
    int per_match_score[100];
    float average;
    int i;

    void display1()
    {
        total_score = 0;

        cout << "\nEnter scores of respective matches played:\n";

        for(i = 1; i <= matches; i++)
        {
            cin >> per_match_score[i];
            total_score = total_score + per_match_score[i];
        }

        cout << "\nTotal = " << total_score << endl;
    }

    void ave()
    {
        average = (float)total_score / matches;
        cout << "Average = " << average << endl;
    }
};

class Bowler : virtual public Player
{
public:
    int no_of_wickets;

    void display2()
    {
        cout << "\nEnter Total No. of Wickets: ";
        cin >> no_of_wickets;

        cout << "\nTotal Number of Wickets = "
             << no_of_wickets << endl;
    }
};

class AllRounder : public Batsman, public Bowler
{
};

void main()
{
    AllRounder a;

    clrscr();

    a.display();
    a.display1();
    a.ave();
    a.display2();

    getch();
}
