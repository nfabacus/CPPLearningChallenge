#include <iostream>
# define PI 3.14

using namespace std;

int globalVariable;

void welcome(); //declaration of function
bool isNumber(string);  // You don't need to specify parameter name here.
int power(int, int);
double power (double, int);  //overloading function
void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
void clearScreen();

int main () {
    int choice;
    char cont;
    do {
//      system("clear"); // clear screen
        clearScreen(); // clear screen
        initMenu();
        cin >> choice;
        menuDecision(choice);
        cout << "Do you want to continue with the calculations? (Y/N)" << endl;
        cin >> cont;
    } while(cont == 'y' || cont == 'Y');



    cout << "power >>> " << power(3, 4) << endl;
    cout << "power 2 >>> " << power(2.5, 2) << endl;
    welcome();
    int isThisNumber;
    isThisNumber = isNumber("54");
    isThisNumber = isNumber("004");
    cout << isThisNumber << endl;
    isNumber("anc");
    isNumber("123a");

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
    int myArr[3]; // setting the size of the array
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


    const int sizeOfArray = 10;
    int i = 0;
    int array[sizeOfArray];

    while (i < sizeOfArray ) {
        array[i] = 10 * i;
        cout << array[i++] << endl;
    }

    int const originalNr = 1234; // 4 digits
    int nr = originalNr;
    int nrOfDigits = 1;

    cout << 1234/10 << endl;
    cout << 123/10 << endl;
    cout << 12/10 << endl;
    cout << 1/10 << endl;

    while(nr/=10) {
        nrOfDigits +=1;
    }

    cout << originalNr << " has " << nrOfDigits << " digits" << endl;

    int localVariable;
    cout << "Value of globalVariable: " << globalVariable << endl;
    cout << "Value of localVariable: " << localVariable << endl;

    int inputNr, result = 0;
    int n = 0;
    for (; n < 3; n++) {
        cout << "Enter " << (n+1) << " number" << endl;
        cin >> inputNr;
        result += inputNr;
    }

    cout << result << endl;
    cout << "We added " << n << " numbers" << endl;


    return 0;
}

void welcome() {
    cout << "Hello, welcome to my programme!" << endl;
}

bool isNumber(string temp) {
    for (int i = 0; i < temp.length(); i++) {
        if(!(temp[i] >=48 && temp[i] <= 57)) {
            cout << "This is NOT a number!" << endl;
            return false;
        }
    }
    cout << "This is a number!" << endl;
    return true;
}

int power(int b, int e) {
    int tmp = b;
    while(e > 1) {
        b = b * tmp;
        e--;
    }
    return b;
}

double power(double b, int e) {
    double tmp = b;
    while(e > 1) {
        b = b * tmp;
        e--;
    }
    return b;
}

void initMenu() {
    cout << "Enter option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choice) {
    double r, a, b, h;
    switch(choice) {
        case 1:
            cout << "Ener the radius: " << endl;
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout << "Ener the side of a square: " << endl;
            cin >> a;
            areaSquare(a);
            break;
        case 3:
            cout << "Ener the width and height of a rectangle: " << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Ener the height and base of a triangle: " << endl;
            cin >> a >> h;
            areaTriangle(a, h);
            break;
        default:
            cout << "You did not choose any of the options from above" << endl;
    }
}

double areaCircle(double r) {
    double result = PI * r * r;
    cout << "The area of the circle with the radius " << r << " is " << result << endl;
    return result;
}

double areaSquare(double a) {
    double result = a * a;
    cout << "The area of the square with the side " << a << " is " << result << endl;
    return result;
}
double areaRectangle(double a, double b) {
    double result = a * b;
    cout << "The area of the rectangle with the first side " << a << ", second side " << b << ", is " << result << endl;
    return result;
}
double areaTriangle(double a, double h) {
    double result = (a * h)/2;
    cout << "The area of the triangle with the base(" << a << ") and the height(" << h << ") is " << result << endl;
    return result;
}

void clearScreen()
{
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}