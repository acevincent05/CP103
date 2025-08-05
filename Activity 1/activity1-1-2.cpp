#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1+num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1-num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1*num2 << endl;
            break;
        case  '/':
            cout << "Result: " << num1 << " / " << num2 << " = " << num1/num2 << endl;
            break;

    }

    return 0;
}
