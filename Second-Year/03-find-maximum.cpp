#include <iostream>
using namespace std;

int main() {
    // Courtesy message explaining what the program does to the user
    cout << "Questo programma visualizza il maggiore tra 2 valori distinti \n";

    // Variables declaration
    int A, B;

    // Input data from the user
    cout << "Inserire il primo numero\n";
    cin >> A;
    cout << "Inserire il secondo numero\n";
    cin >> B;

    // Selection logic to find the maximum value
    if (A > B) {
        cout << "Risultato: " << A << "\n";
    } 
    else {
        cout << "Risultato: " << B << "\n";
    }

    // Successful execution return
    return 0;
}
