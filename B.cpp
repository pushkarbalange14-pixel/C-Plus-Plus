#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) {
        n /= 10;
    }

    cout << "First digit = " << n;

    return 0;
}
