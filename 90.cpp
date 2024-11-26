#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 1; 
    }

    long long sum = static_cast<long long>(n) * (n + 1) / 2; 
    sum = sum * sum;
    cout << "The sum of the series 1^3 + 2^3 + ... + " << n << "^3 is: " << sum << endl;
    return 0;
}
