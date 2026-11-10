#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program displays a custom multiplication table up to a user-defined limit.\n\n";

    int number, limit;
    
    // Input data from the user
    cout << "Enter the number you want the multiplication table for:\n";
    cin >> number;
    
    cout << "Enter the maximum limit (e.g., 10):\n";
    cin >> limit;
    cout << "\n";

    cout << "Multiplication table of " << number << " up to " << limit << ":\n";

    // Loop from 1 to the user-defined limit to break down the calculations
    for (int i = 1; i <= limit; i++) {
        cout << number << " * " << i << " = " << (number * i) << "\n";
    }

    return 0;
}
