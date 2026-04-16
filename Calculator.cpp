#include <iostream>
#include <cmath>
using namespace std;

// Functions
double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if(b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

int mod(int a, int b) {
    if(b == 0) {
        cout << "Error: Mod by zero!" << endl;
        return 0;
    }
    return a % b;
}

int main() {
    double num1, num2;
    int choice;

    do {
        cout << "\n====== CALCULATOR ======\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Modulus\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 0) break;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch(choice) {
            case 1:
                cout << "Result = " << add(num1, num2);
                break;
            case 2:
                cout << "Result = " << sub(num1, num2);
                break;
            case 3:
                cout << "Result = " << mul(num1, num2);
                break;
            case 4:
                cout << "Result = " << divide(num1, num2);
                break;
            case 5:
                cout << "Result = " << power(num1, num2);
                break;
            case 6:
                cout << "Result = " << mod((int)num1, (int)num2);
                break;
            default:
                cout << "Invalid choice!";
        }

    } while(true);

    cout << "\nCalculator Closed.\n";
    return 0;
}
