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

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i; 
    }

    cout << "The sum of the series 1 + 2 + ... + " << n << " is: " << sum << endl;
    return 0;
}