#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "Questo programma esegue la somma di due numeri \n";

    // Variables declaration
    int A, B, S;

    // Input data from the user
    cout << "Inserire il primo numero\n";
    cin >> A;
    cout << "Inserire il secondo numero\n";
    cin >> B;

    // Math operation: calculating the sum
    S = A + B;

    // Outputting the final result to the user
    cout << "Risultato: " << S << "\n";

    // Successful execution return
    return 0;
}
