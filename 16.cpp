// Write a c program to find out sum of digit of given number.

#include <bits/stdc++.h>
using namespace std;

int sum(int num) {
   
    string numStr = to_string(num);
    int sum = 0;

    
    for (int i=0;i<numStr.length();i++) {
        
        sum += numStr[i] - '0';
    }

    return sum;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "SUM OF THE DIGITS OF GIVEN NUMBER IS: " << sum(x) << endl;

    return 0;
}
