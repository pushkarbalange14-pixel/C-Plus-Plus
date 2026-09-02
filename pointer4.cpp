#include <iostream>
using namespace std;

void doubleValue(int *n) {
    *n = *n * 2; // Modifies the value at the original address
}

int main() {
    int val = 10;
    doubleValue(&val);
    cout << "Doubled value: " << val << endl; // Outputs 20
    return 0;
}
