#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;

        if (digit % 2 == 0)
            count++;

        n /= 10;
    }

    cout << "Number of even digits = " << count;

    return 0;
}
