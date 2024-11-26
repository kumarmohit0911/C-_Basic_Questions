#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 1; // Exit the program with an error code
    }

    int sum = n * (n + 1) * (2 * n + 1) / 6; // Using the formula
    cout << "The sum of the series 1^2 + 2^2 + ... + " << n << "^2 is: " << sum << endl;
    return 0;
}
