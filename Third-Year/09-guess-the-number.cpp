#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Courtesy message explaining the game rules to the user
    cout << "This program generates a secret number (1-99) and lets the user guess it within N attempts.\n\n";

    // Seed the random number generator using the current system time
    srand(time(NULL));
    int secret_number = rand() % 99 + 1;

    int max_attempts;
    cout << "Enter the number of attempts you want: ";
    cin >> max_attempts;
    cout << "\n";

    int attempts = 0;
    bool guessed = false;

    // Game loop: continues while attempts remain AND the number has not been guessed
    while (attempts < max_attempts && !guessed) {
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secret_number) {
            cout << "You won! You guessed the number in " << attempts << " attempts.\n";
            guessed = true;
        } 
        else {
            // Provide directional hints to guide the player
            if (guess < secret_number) {
                cout << "Too low! Try a higher number.\n";
            } 
            else {
                cout << "Too high! Try a lower number.\n";
            }
        }
    }

    // End-game check if the player ran out of attempts
    if (!guessed) {
        cout << "\nGame over! Sorry, the secret number was: " << secret_number << "\n";
    }

    return 0;
}
