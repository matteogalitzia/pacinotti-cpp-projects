#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program displays the maximum value between 2 distinct numbers.\n\n";

    // Variables declaration
    int A, B;

    // Input data from the user
    cout << "Enter the first number:\n";
    cin >> A;
    cout << "Enter the second number:\n";
    cin >> B;

    // Selection logic to find the maximum value
    if (A > B) {
        cout << "Result: " << A << "\n";
    } 
    else {
        cout << "Result: " << B << "\n";
    }

    // Successful execution return
    return 0;
}
