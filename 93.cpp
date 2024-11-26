#include <iostream>
using namespace std;

int main() {
    double a, d, n;
    cout << "Enter the first term (a) of the H.P.: ";
    cin >> a;

    cout << "Enter the common difference (d) of the A.P. (which is the denominator of H.P.): ";
    cin >> d;

    cout << "Enter the number of terms (n) in the H.P.: ";
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 1 / (a + i * d);  // Add the reciprocal of each term in the corresponding A.P.
    }

    cout << "The sum of the H.P. is: " << sum << endl;
    return 0;
}
