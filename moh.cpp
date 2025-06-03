#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int fact, value;
    cout << "Enter any non-negative integer: ";
    cin >> value;

    if (!cin) {
        cout << "Invalid input. Please enter an integer value." << endl;
        return 1;
    }

    if (value < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    if (value > 20) { // 20! is the highest that fits in a 64-bit integer
        cout << "Warning: Input is too large, result may be incorrect due to overflow." << endl;
    }

    fact = factorial(value);
    cout << "Factorial of " << value << " is: " << fact << endl;
    return 0;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
