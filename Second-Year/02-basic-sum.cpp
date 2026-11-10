#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the sum of two integers.\n\n";

    // Variables declaration
    int A, B, S;

    // Input data from the user
    cout << "Enter the first number:\n";
    cin >> A;
    cout << "Enter the second number:\n";
    cin >> B;

    // Math operation: calculating the sum
    S = A + B;

    // Outputting the final result to the user
    cout << "Result: " << S << "\n";

    // Successful execution return
    return 0;
}
