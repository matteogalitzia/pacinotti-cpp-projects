#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program calculates the average of even and odd integers using a do-while loop.\n\n";

    // Variables declaration
    int num;
    int even_sum = 0, even_count = 0;
    int odd_sum = 0, odd_count = 0;

    // Post-condition loop: avoids duplicating the input prompt
    do {
        cout << "Enter a number (0 to terminate): ";
        cin >> num;

        // Ensure the sentinel value (0) is not processed as an even number
        if (num != 0) {
            if (num % 2 == 0) {
                even_sum += num;
                even_count++;
            } 
            else {
                odd_sum += num;
                odd_count++;
            }
        }
    } while (num != 0);

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
