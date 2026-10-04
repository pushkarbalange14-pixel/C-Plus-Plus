#include <iostream.h>
#include <conio.h>

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp; // Final return to pass result
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

void main() {
    clrscr();
    Complex c1(5, 6), c2(2, 3);
    Complex diff;

    diff = c1 - c2;

    cout << "Difference: ";
    diff.display();

    getch();
}
