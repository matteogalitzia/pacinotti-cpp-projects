#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program sorts three integers and displays them from lowest to highest.\n\n";

    // Variables declaration: descriptive names for input numbers and a temporary swap variable
    int num1, num2, num3, temp;

    // Input data from the user
    cout << "Enter the first number:\n";
    cin >> num1;
    cout << "Enter the second number:\n";
    cin >> num2;
    cout << "Enter the third number:\n";
    cin >> num3;

    // Sorting network logic using conditional swaps
    
    // Step 1: Ensure num1 is smaller than num2
    if (num1 > num2) {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    // Step 2: Ensure num1 is smaller than num3 (this guarantees num1 is now the absolute minimum)
    if (num1 > num3) {
        temp = num3;
        num3 = num1;
        num1 = temp;
    }

    // Step 3: Ensure num2 is smaller than num3 (this orders the remaining two numbers)
    if (num2 > num3) {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }

    // Outputting the sorted results to the user
    cout << "Minimum: " << num1 << "\n";
    cout << "Middle: " << num2 << "\n";
    cout << "Maximum: " << num3 << "\n";

    // Successful execution return
    return 0;
}
