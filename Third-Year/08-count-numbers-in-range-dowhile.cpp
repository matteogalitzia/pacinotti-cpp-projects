#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program counts how many numbers in a sequence of length N fall within the range [X, Y] using a safe do-while loop.\n\n";

    int X, Y, N;
    cout << "Enter the two range boundaries (X and Y): ";
    cin >> X >> Y;

    // Ensure X is the lower bound and Y is the upper bound using a swap
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    cout << "How long is the sequence of numbers? ";
    cin >> N;
    cout << "\n";

    int i = 0;
    int in_range_count = 0;

    // Safety check to prevent the do-while loop from executing if the sequence length is 0 or negative
    if (N > 0) {
        do {
            int num;
            cout << "Enter a number: ";
            cin >> num;

            // Check if the number is within the inclusive range
            if (num >= X && num <= Y) {
                in_range_count++;
            }

            i++;
        } while (i < N);
    }

    // Output the final count
    cout << "\nNumbers within [" << X << ", " << Y << "]: " << in_range_count << "\n";

    return 0;
}
