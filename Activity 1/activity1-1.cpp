#include <iostream>
using namespace std;

int main() {
    string op;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    float num1;
    cout << "Enter your first number: ";
    cin >> num1;
    float num2;
    cout << "Enter your second number: ";
    cin >> num2;

    if (op == "+") {
        cout << "Result: " << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }

    if (op == "-") {
        cout << "Result: " << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }

    if (op == "*") {
        cout << "Result: " << num1 << " * " << num2 << " = " << num1*num2 << endl;
    }

    if (op == "/") {
        cout << "Result: " << num1 << " / " << num2 << " = " << num1/num2 << endl;
    }

    return 0;
}