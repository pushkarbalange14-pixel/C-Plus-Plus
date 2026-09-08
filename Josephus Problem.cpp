#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number of people: ";
    cin >> n;

    cout << "Enter elimination position: ";
    cin >> k;

    int people[100];

    for (int i = 0; i < n; i++)
    {
        people[i] = i + 1;
    }

    int size = n;
    int index = 0;

    cout << "\nElimination order: ";

    while (size > 1)
    {
        index = (index + k - 1) % size;

        cout << people[index] << " ";

        for (int i = index; i < size - 1; i++)
        {
            people[i] = people[i + 1];
        }

        size--;
    }

    cout << "\nWinner = " << people[0] << endl;

    return 0;
}
