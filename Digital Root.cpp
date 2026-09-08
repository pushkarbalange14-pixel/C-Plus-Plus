#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;

    cout << "Enter a large number: ";
    cin >> num;

    while (num.length() > 1)
    {
        int sum = 0;

        for (char digit : num)
        {
            sum = sum + (digit - '0');
        }

        num = to_string(sum);
    }

    cout << "Digital Root = " << num << endl;

    return 0;
}
