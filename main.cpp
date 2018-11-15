#include <iostream>

using namespace std;

int main () {
    cout << "Hello world!" << endl; // endl means end of line (goes to next line)
    int A = 5;
    cout << A << endl;
    // & ampersand
    cout << &A << endl; //& means to show the memory allocation address of variable A

    A = 10;
    cout << A << endl;  // value of variable A changed
    cout << &A << endl; // but the memory address of the variable is still the same.



    return 0;
}