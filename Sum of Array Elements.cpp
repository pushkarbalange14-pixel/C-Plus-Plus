/*
==========================================
Problem Name : Sum of Array Elements
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program calculates the sum of all elements in an array.
==========================================
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
