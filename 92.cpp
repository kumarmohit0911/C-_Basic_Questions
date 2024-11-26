#include <iostream>
#include <cmath> // For power function
using namespace std;

int main() {
    double a, r, n;
    cout << "Enter the first term (a) of the G.P.: ";
    cin >> a;

    cout << "Enter the common ratio (r) of the G.P.: ";
    cin >> r;

    cout << "Enter the number of terms (n) in the G.P.: ";
    cin >> n;

    // If the common ratio is 1
    if (r == 1) {
        double sum = a * n;  // All terms are the same when r = 1
        cout << "The sum of the G.P. is: " << sum << endl;
    } else {
        // Calculate the sum using the formula
        double sum = a * (1 - pow(r, n)) / (1 - r);
        cout << "The sum of the G.P. is: " << sum << endl;
    }
    return 0;
}
