#include <iostream>

using namespace std;

int main () {
    int value1 = 15;
    int value2 = 10;

    // if conditions
    int value10= 10;
    int value20 = 20;
    if(value10 < value20) {
        cout << "value10 is smaller than value20!" << endl;
    } else {
        cout << "value10 is bigger than value20!" << endl;
    }

    string message = (value10 < value20) ? "ternary: value10 is smaller than value20!" :  "ternary: value10 is bigger than value20!";
    cout << message << endl;


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

    // Switch
    int x = 7;
    switch(x) {
        case 5:
            cout << "x value is 5!" << endl;
            break;
        case 7:
            cout <<  "x value is 7!" << endl;
            break;
        default:
            cout << "x value is whatever number!!" << endl;
    }

    // arrays
    int myArr[3];
    myArr[0] = 10;
    myArr[1] = 50;
    myArr[2] = 256;
    // DO NOT ASSIGN MORE THAN THE SIZE OF THE ARRAY SET e.g. 3 here. array[2] is the biggest one.
    cout << "array[0] = " << myArr[0] << "address: " << &myArr[0] <<endl;
    cout << "array[1] = " << myArr[1] << "address: " << &myArr[1] <<endl;
    cout << "array[2] = " << myArr[2] << "address: " << &myArr[2] <<endl;
    cout << "array = " << myArr <<endl;

    // Multidimensional array
    int myMArr[3][4] = {0}; //can set all the numbers default 0.
    myMArr[2][4] = 77;
    cout << myMArr[0][0] << endl;
    cout << myMArr[2][4] << endl;

    for (int i = 0; i < 10; i++) {
        cout << "i is " << i << endl;
    }

    return 0;
}