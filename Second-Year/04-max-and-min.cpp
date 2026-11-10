#include <iostream>
using namespace std;

int main() {
    // Courtesy message in English explaining the program's purpose
    cout << "This program displays the maximum and minimum values between 2 distinct numbers.\n\n";

    // Variables declaration
    int A, B;

    // Input data from the user
    cout << "Enter the first number:\n";
    cin >> A;
    cout << "Enter the second number:\n";
    cin >> B;

    // Selection logic to display major and minor values
    if (A > B) {
        cout << "Maximum:\n" << A << "\n";
        cout << "Minimum:\n" << B << "\n";
    } 
    else {
        cout << "Maximum:\n" << B << "\n";
        cout << "Minimum:\n" << A << "\n";
    }

    // Successful execution return
    return 0;
}
