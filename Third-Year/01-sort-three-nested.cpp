#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program takes three numbers and displays them in ascending order.\n\n";

    // Variables declaration with descriptive names
    int num1, num2, num3;

    // Input data from the user
    cout << "Enter three integers separated by spaces:\n";
    cin >> num1 >> num2 >> num3;
    cout << "\n";

    // Brute-force sorting logic checking all combinations using nested conditions
    if (num1 > num2) {
        if (num2 > num3) {
            cout << "Sorted order: " << num3 << " " << num2 << " " << num1 << "\n";
        } 
        else {
            if (num1 > num3) {
                cout << "Sorted order: " << num2 << " " << num3 << " " << num1 << "\n";
            } 
            else {
                cout << "Sorted order: " << num2 << " " << num1 << " " << num3 << "\n";
            }
        }
    } 
    else {
        if (num1 > num3) {
            cout << "Sorted order: " << num3 << " " << num1 << " " << num2 << "\n";
        } 
        else {
            if (num2 > num3) {
                cout << "Sorted order: " << num1 << " " << num3 << " " << num2 << "\n";
            } 
            else {
                cout << "Sorted order: " << num1 << " " << num2 << " " << num3 << "\n";
            }
        }
    }

    return 0;
}
