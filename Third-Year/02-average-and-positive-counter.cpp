#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the average of 3 numbers and counts how many are positive.\n\n";

    // Declaring numbers as float right away avoids calculation bugs with decimals
    float num1, num2, num3;
    int positive_count = 0;

    // Input data from the user
    cout << "Enter three numbers separated by spaces:\n";
    cin >> num1 >> num2 >> num3;

    // Average calculation
    float average = (num1 + num2 + num3) / 3.0;

    // Selection logic using the post-increment operator
    if (num1 > 0) {
        positive_count++;
    }
    if (num2 > 0) {
        positive_count++;
    }
    if (num3 > 0) {
        positive_count++;
    }

    // Outputting the final results
    cout << "\nAverage: " << average << "\n";
    cout << "Positive numbers: " << positive_count << "\n";

    return 0;
}
