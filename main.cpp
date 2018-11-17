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

    int a = 40, b = 12, c = 20;
    cout << "a : " << a << " address: " << &a << endl;
    cout << "b : " << b << " address: " << &b << endl;

    cout << "what is your integer? ";
    int d;
    cin >> d;
    cout << endl;
    cout << "variable d is " << d<< endl;


    string name, surname;

    cout << "What is your first name? " << endl;
    cin >> name;
    cout << "What is your last name? " << endl;
    cin >> surname;
    cout << "Hello, " << name << " " << surname << "!" << endl;

    // relational operators
    int firstInt = 10;
    int secondInt = 5;

    cout << (firstInt == secondInt) << endl;  //returns 0 for false. make sure to wrap a==b with parentheses. Otherwise, it will error.
    cout << (firstInt != secondInt) << endl;  // returns 1 for true.
    cout << (firstInt > secondInt) << endl;

    cout << (firstInt != secondInt && firstInt > secondInt) << endl;
    cout << (firstInt == secondInt || firstInt > secondInt) << endl;
    cout << (firstInt == secondInt || firstInt < secondInt) << endl;
    return 0;
}