#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program finds the minimum value in a sequence of integers terminated by 0.\n\n";

    int num;
    cout << "Enter the first number (0 to terminate): ";
    cin >> num;

    // Edge-case check: handle immediate termination if the first input is 0
    if (num == 0) {
        cout << "No valid numbers were entered.\n";
        return 0;
    }

    // Initialize the minimum value with the first valid number entered
    int min_value = num;

    // Sentinel-controlled loop: continues reading until 0 is entered
    while (num != 0) {
        if (num < min_value) {
            min_value = num;
        }

        cout << "Enter the next number (0 to terminate): ";
        cin >> num;
    }

    // Output the final minimum value found
    cout << "\nThe minimum number is: " << min_value << "\n";

    return 0;
}
