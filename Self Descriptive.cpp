#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;

    cout << "Enter a number: ";
    cin >> num;

    int n = num.length();
    bool selfDescriptive = true;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (num[j] - '0' == i)
            {
                count++;
            }
        }

        if (count != num[i] - '0')
        {
            selfDescriptive = false;
            break;
        }
    }

    if (selfDescriptive)
        cout << num << " is a Self-Descriptive Number";
    else
        cout << num << " is NOT a Self-Descriptive Number";

    return 0;
}
