#include <iostream.h>
#include <conio.h>

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    friend Complex operator+(Complex c1, Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp; // Final return to pass result
}

void main() {
    clrscr();
    Complex c1(3, 4), c2(1, 2);
    Complex sum;

    sum = c1 + c2;

    cout << "Sum: ";
    sum.display();

    getch();
}
