#include <iostream.h>
#include <conio.h>
#include <string.h>

class String {
    char str[50];
public:
    String(char s[] = "") {
        strcpy(str, s);
    }

    int operator==(String s) {
        int res = 0;
        if (strcmp(str, s.str) == 0) {
            res = 1;
        }
        return res; // Final return at end of function
    }
};

void main() {
    clrscr();
    String s1("Hello"), s2("Hello"), s3("World");

    if (s1 == s2)
        cout << "s1 and s2 are Equal\n";
    else
        cout << "s1 and s2 are Not Equal\n";

    if (s1 == s3)
        cout << "s1 and s3 are Equal\n";
    else
        cout << "s1 and s3 are Not Equal\n";

    getch();
}
