#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; // Allocate dynamic memory
    *ptr = 100;

    cout << "Dynamic value: " << *ptr << endl;

    delete ptr;    // Free the memory
    ptr = nullptr; // Avoid dangling pointer
    return 0;
}
