#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "This program solves quadratic equations (Ax^2 + Bx + C = 0) and allows repeated calculations.\n\n";

    int repeat;

    // Outer loop allowing the user to solve multiple equations in a single session
    do {
        float A, B, C;
        cout << "Enter coefficients A, B, and C in this order:\n";
        cin >> A >> B >> C;
        cout << "\n";

        // Safety check: if A is 0, it is not a quadratic equation (prevents division by zero)
        if (A == 0) {
            cout << "Error: Coefficient A cannot be zero in a quadratic equation.\n";
        } 
        else {
            // Calculate the discriminant (Delta = B^2 - 4AC)
            float delta = (B * B) - (4.0f * A * C);

            // Evaluate the three possible mathematical outcomes
            if (delta == 0) {
                float x = -B / (2.0f * A);
                cout << "One real double root: x = " << x << "\n";
            } 
            else if (delta > 0) {
                float x1 = (-B + sqrt(delta)) / (2.0f * A);
                float x2 = (-B - sqrt(delta)) / (2.0f * A);
                cout << "Two distinct real roots:\n";
                cout << "x1 = " << x1 << "\n";
                cout << "x2 = " << x2 << "\n";
            } 
            else {
                cout << "No real solutions (imaginary roots).\n";
            }
        }

        // Prompt user to repeat the process
        cout << "\nDo you want to solve another equation? (1 = Yes, 0 = No): ";
        cin >> repeat;
        cout << "\n";

    } while (repeat == 1);

    return 0;
}
