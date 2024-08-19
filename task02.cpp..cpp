#include <iostream>

using namespace std;

int main() {
    // Variables to store user input
    double num1, num2;
    char operation;

    // Display a welcome message
    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Enter two numbers and choose an operation (+, -, *, /)." << endl;

    // Get user input for the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Get user input for the operation
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the chosen operation and display the result
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation. Please choose +, -, *, or /." << endl;
            break;
    }

    return 0;
}

