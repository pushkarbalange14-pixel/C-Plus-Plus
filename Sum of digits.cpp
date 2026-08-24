/*
==========================================
Problem Name : Sum of Digits
Language     : C++ Programming
Author       : Pushkar Alange
Description  : This program calculates the sum of digits of a given number.
==========================================
*/

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
