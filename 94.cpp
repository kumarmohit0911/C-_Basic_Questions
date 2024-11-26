
#include <iostream>
using namespace std;

int main() {
    double a = 1;  // First term of the series
    double r = 2;  // Common ratio

    // Check for convergence condition
    if (r >= 1) {
        cout << "The sum of this series diverges to infinity, as the common ratio is >= 1." << endl;
    } else {
        double sum = a / (1 - r); // Formula for sum of infinite geometric series
        cout << "The sum of the infinite geometric series is: " << sum << endl;
    }

    return 0;
}
