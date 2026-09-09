#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15};
    int *ptr = arr;

    cout << "First: " << *ptr << endl; 
    ptr++; // Moves to the next integer memory slot
    cout << "Second: " << *ptr << endl; 
    return 0;
}
