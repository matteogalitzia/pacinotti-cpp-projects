#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program checks if a number is even/odd and positive/negative.\n\n";

    int number;
    cout << "Enter an integer number:\n";
    cin >> number;
    cout << "\n";

    // Block 1: Optimized selection logic for even or odd (calculating modulo directly)
    if (number % 2 == 0) {
        cout << "The number is even.\n";
    } 
    else {
        cout << "The number is odd.\n";
    }

    // Block 2: Precise selection logic for sign, including the zero case
    if (number > 0) {
        cout << "The number is positive.\n";
    } 
    else if (number < 0) {
        cout << "The number is negative.\n";
    } 
    else {
        cout << "The number is zero.\n";
    }

    return 0;
}
