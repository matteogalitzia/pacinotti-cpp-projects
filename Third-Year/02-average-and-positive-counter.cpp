#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the average of 3 numbers and counts how many are positive.\n\n";

    // Variables declaration
    int num1, num2, num3;
    int positive_count = 0;

    // Input data from the user
    cout << "Enter three integers separated by spaces:\n";
    cin >> num1 >> num2 >> num3;

    // Fixed math logic: casting the integer sum to float before division to keep decimal precision
    float average = static_cast<float>(num1 + num2 + num3) / 3.0f;

    // Selection logic to count positive numbers (greater than 0)
    if (num1 > 0) {
        positive_count++;
    }
    if (num2 > 0) {
        positive_count++;
    }
    if (num3 > 0) {
        positive_count++;
    }

    // Outputting the final results to the user
    cout << "\nAverage: " << average << "\n";
    cout << "Positive numbers: " << positive_count << "\n";

    return 0;
}
