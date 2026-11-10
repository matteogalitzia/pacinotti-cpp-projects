#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program displays the complete multiplication table of a given number using a for loop.\n\n";

    int number;
    cout << "Enter a number:\n";
    cin >> number;
    cout << "\n";

    // Loop from 1 to 10 to print the full multiplication breakdown
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << (number * i) << "\n";
    }

    return 0;
}
