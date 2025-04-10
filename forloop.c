#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user to enter the size of the diamond (must be an odd number)
    cout << "Enter the size of the diamond (odd number): ";
    cin >> n;

    // Check if the input is valid (odd number)
    if (n % 2 == 0) {
        cout << "The size of the diamond must be an odd number." << endl;
        return 1;
    }

    // Calculate the middle of the diamond
    int mid = n / 2;

    // Upper part of the diamond
    for (int i = 0; i <= mid; ++i) {
        // Print leading spaces
        for (int j = 0; j < mid - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = mid - 1; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < mid - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
