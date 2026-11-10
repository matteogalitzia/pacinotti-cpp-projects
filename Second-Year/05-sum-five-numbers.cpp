#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the sum of 5 integers.\n\n";

    // Variables declaration
    int A, B, C, D, E, S;

    // Input data from the user for all 5 numbers
    cout << "Enter the first number:\n";
    cin >> A;
    cout << "Enter the second number:\n";
    cin >> B;
    cout << "Enter the third number:\n";
    cin >> C;
    cout << "Enter the fourth number:\n";
    cin >> D;
    cout << "Enter the fifth number:\n";
    cin >> E;

    // Math operation: summing all variables together
    S = A + B + C + D + E;

    // Outputting the final result to the user
    cout << "Result: " << S << "\n";

    // Successful execution return
    return 0;
}
