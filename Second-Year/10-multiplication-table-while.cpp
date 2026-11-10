#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program displays the multiplication table of a given number up to 10.\n\n";

    int N;
    cout << "Enter a number:\n";
    cin >> N;
    cout << "\n";

    // Initialize the multiplier counter
    int P = 1;

    // Loop to calculate and display each step of the multiplication table
    while (P <= 10) {
        // Output the result of the multiplication directly
        cout << (P * N) << " ";
        
        // Increment the multiplier counter
        P++;
    }

    cout << "\n";
    return 0;
}
