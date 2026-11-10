#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program determines if an integer is even or odd.\n\n";

    int N;
    cout << "Enter a number:\n";
    cin >> N;

    // Selection logic: calculating the modulo directly inside the condition
    if (N % 2 == 0) {
        cout << "The number is even.\n";
    } 
    else {
        cout << "The number is odd.\n";
    }

    // Successful execution return
    return 0;
}
