#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter odd number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Please enter an odd number.";
        return 0;
    }

    int magic[20][20] = {0};

    int row = 0;
    int col = n / 2;

    for (int num = 1; num <= n * n; num++)
    {
        magic[row][col] = num;

        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;

        if (magic[newRow][newCol] != 0)
        {
            row = (row + 1) % n;
        }
        else
        {
            row = newRow;
            col = newCol;
        }
    }

    cout << "\nMagic Square:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << magic[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}
