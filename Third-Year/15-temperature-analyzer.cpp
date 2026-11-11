#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program records a sequence of temperatures and counts how many are below 0 and how many are 0 or above.\n\n";

    int total_temps;
    int below_zero_count = 0;
    int zero_or_above_count = 0;

    // Input validation loop: ensures the user enters a positive number of readings
    do {
        cout << "How many temperatures do you want to record? ";
        cin >> total_temps;
        
        if (total_temps <= 0) {
            cout << "Error: Please enter a number greater than 0.\n\n";
        }
    } while (total_temps <= 0);

    cout << "\n";

    // For loop to read and classify each temperature
    for (int i = 0; i < total_temps; i++) {
        float temp;
        cout << "Enter temperature #" << (i + 1) << " (valid range -50 to 50): ";
        cin >> temp;

        // Range validation check
        if (temp >= -50.0f && temp <= 50.0f) {
            if (temp < 0.0f) {
                below_zero_count++;
            } 
            else {
                zero_or_above_count++;
            }
        } 
        else {
            // Inform the user and retry the current iteration without losing previous inputs
            cout << "Error: Please enter a valid temperature between -50 and 50.\n";
            i--; 
        }
    }

    // Output the final statistics
    cout << "\nTemperatures below 0: " << below_zero_count << "\n";
    cout << "Temperatures equal to or above 0: " << zero_or_above_count << "\n";

    return 0;
}
