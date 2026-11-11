#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program acts as a basic calculator (addition, subtraction, multiplication, division, power) via a menu.\n\n";

    float num1, num2, result;
    int choice;

    // Display the interactive menu
    cout << "Select an operation:\n";
    cout << "1 - Addition\n";
    cout << "2 - Subtraction\n";
    cout << "3 - Multiplication\n";
    cout << "4 - Division\n";
    cout << "5 - Power\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Early validation of the menu choice before asking for numbers
    if (choice < 1 || choice > 5) {
        cout << "\nError: Invalid menu selection.\n";
        return 1;
    }

    // Input the two operands
    cout << "\nEnter the first number (base): ";
    cin >> num1;
    cout << "Enter the second number (exponent for power): ";
    cin >> num2;
    cout << "\n";

    // Switch statement to execute the selected mathematical operation
    switch (choice) {
        case 1:
            result = num1 + num2;
            break;

        case 2:
            result = num1 - num2;
            break;

        case 3:
            result = num1 * num2;
            break;

        case 4:
            // Safety check to prevent division by zero
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            result = num1 / num2;
            break;

        case 5: {
            // Check for negative exponents in this basic integer-loop implementation
            if (num2 < 0) {
                cout << "Error: Negative exponents are not supported in this version.\n";
                return 1;
            }
            
            result = 1;
            int count = 0;
            
            // Nested while loop to calculate power iteratively
            while (count < num2) {
                result *= num1;
                count++;
            }
            break;
        }
    }

    // Output the final calculated result
    cout << "Result: " << result << "\n";

    return 0;
}
