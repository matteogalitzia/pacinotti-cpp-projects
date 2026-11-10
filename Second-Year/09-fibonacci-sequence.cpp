#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program displays the first N terms of the Fibonacci sequence.\n\n";

    int num;
    cout << "Enter the number of terms:\n";
    cin >> num;

    // Direct initialization of the first two terms and the loop counter
    int A = 1;
    int B = 1;
    int i = 0;

    // Print the first two standard terms of the sequence
    cout << "1, 1";

    // Loop to calculate and display subsequent Fibonacci terms
    while (i < num) {
        int C = A + B;
        cout << ", " << C;
        
        // Slide variables forward to prepare for the next iteration
        A = B;
        B = C;
        
        // Increment the loop counter to track the iterations
        i++; 
    }

    cout << "\n";
    return 0;
}
