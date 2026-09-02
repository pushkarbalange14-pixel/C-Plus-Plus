#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr = &num; // ptr stores the address of num

    cout << "Value of num: " << *ptr << endl;
    cout << "Address of num: " << ptr << endl;
    return 0;
}
