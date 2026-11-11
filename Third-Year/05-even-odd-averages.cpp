#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the average of even and odd integers from a sequence ending with 0.\n\n";

    // Variables declaration
    int num;
    int even_sum = 0, even_count = 0;
    int odd_sum = 0, odd_count = 0;

    // Input the first number before entering the sentinel loop
    cout << "Enter the first number (0 to terminate): ";
    cin >> num;

    // Sentinel-controlled loop: continues until the user enters 0
    while (num != 0) {
        if (num % 2 == 0) {
            even_sum += num;
            even_count++;
        } 
        else {
            odd_sum += num;
            odd_count++;
        }

        cout << "Enter the next number (0 to terminate): ";
        cin >> num;
    }

    cout << "\n";

    // Safe division checks to prevent division-by-zero crashes
    if (even_count > 0) {
        float even_average = static_cast<float>(even_sum) / even_count;
        cout << "Even numbers average: " << even_average << "\n";
    } 
    else {
        cout << "No even numbers were entered.\n";
    }

    if (odd_count > 0) {
        float odd_average = static_cast<float>(odd_sum) / odd_count;
        cout << "Odd numbers average: " << odd_average << "\n";
    } 
    else {
        cout << "No odd numbers were entered.\n";
    }

    return 0;
}
