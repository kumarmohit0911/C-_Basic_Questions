#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cout << "Enter the first term (a) of the A.P.: ";
    cin >> a;

    cout << "Enter the common difference (d) of the A.P.: ";
    cin >> d;

    cout << "Enter the number of terms (n) in the A.P.: ";
    cin >> n;

    // Calculate the sum using the formula
    long long sum = (long long)n * (2 * a + (n - 1) * d) / 2;

    cout << "The sum of the A.P. is: " << sum << endl;
    return 0;
}
