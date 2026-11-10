#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program counts how many positive and negative numbers are entered.\n\n";

    int N;
    cout << "How many numbers do you want to check? ";
    cin >> N;

    // Initialize counters for positive numbers, negative numbers, and the loop
    int positive_count = 0;
    int negative_count = 0;
    int i = 0;

    // Loop running until the counter reaches the total number N
    while (i < N) {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        // Condition to sort and count numbers, ignoring zero
        if (num > 0) {
            positive_count++;
        } 
        else if (num < 0) {
            negative_count++;
        }

        // Increment the loop counter
        i++;
    }

    // Outputting the final results to the user
    cout << "\nPositive numbers: " << positive_count << "\n";
    cout << "Negative numbers: " << negative_count << "\n";

    return 0;
}
