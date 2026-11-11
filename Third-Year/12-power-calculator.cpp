#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the power of an integer base raised to an integer exponent.\n\n";

    int base, exponent;
    cout << "Enter the base and the exponent in this order:\n";
    cin >> base >> exponent;
    cout << "\n";

    // Handle invalid mathematical case: 0 raised to a negative power (division by zero)
    if (base == 0 && exponent < 0) {
        cout << "Error: 0 cannot be raised to a negative exponent.\n";
        return 1;
    }

    // Use long long to prevent integer overflow on large powers
    long long result = 1;
    int count = 0;

    // Determine the absolute value of the exponent to run the multiplication loop
    int abs_exponent = (exponent < 0) ? -exponent : exponent;

    while (count < abs_exponent) {
        result *= base; // Compact multiplication assignment
        count++;
    }

    // Output formatting based on whether the exponent was positive/zero or negative
    if (exponent >= 0) {
        cout << "Power result: " << result << "\n";
    } 
    else {
        // For negative exponents, the result is 1 / (base^|exponent|)
        double decimal_result = 1.0 / result;
        cout << "Power result: " << decimal_result << "\n";
    }

    return 0;
}
