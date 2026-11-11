#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program counts the number of vowels in a sequence of characters ending with '.'.\n\n";

    char ch;
    int vowel_count = 0;

    // Sentinel-controlled loop: reads characters until '.' is entered
    do {
        cout << "Enter a character (press '.' to finish): ";
        cin >> ch;

        // Check for both uppercase and lowercase vowels using logical OR (||)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }

    } while (ch != '.');

    // Output the final vowel count
    cout << "\nTotal vowels entered: " << vowel_count << "\n";

    return 0;
}
