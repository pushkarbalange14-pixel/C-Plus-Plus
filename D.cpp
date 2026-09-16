#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the limit: ";
    cin >> n;

    cout << "Numbers divisible by both 3 and 5:\n";

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " ";
    }

    return 0;
}
