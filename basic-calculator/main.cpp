#include <iostream>  // For input and output
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation.\n";
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
