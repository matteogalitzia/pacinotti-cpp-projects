#include <iostream>
using namespace std;

int main() {
    // Courtesy message in English explaining the program's purpose
    cout << "This program calculates the sum of N integers using a while loop.\n\n";

    int N;
    cout << "How many numbers do you want to sum?\n";
    cin >> N;

    // Direct initialization of variables
    int S = 0;
    int n = 0;

    // Loop running WHILE the counter 'n' is less than the total 'N'
    while (n < N) {
        int num;
        cout << "Enter the number:\n";
        cin >> num;
        
        S += num; // Professional shorthand for S = S + num
        n++;      // Professional post-increment operator
    }

    // Outputting the final accumulated result
    cout << "Result: " << S << "\n";

    return 0;
}
