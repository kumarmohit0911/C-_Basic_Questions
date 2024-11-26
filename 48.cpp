// Cpp program to convert currency or number in word.
#include <bits/stdc++.h>
using namespace std;

string convertToWords(int num) {
    
    vector<string> ones = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> teens= {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> tens= {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    string result = "";
    
    if (num >= 100) {
        result += ones[num / 100] + "hundred "; 
        num %= 100;
    }
    
    if (num >= 10 && num < 20) {
        result += teens[num - 10]+" "; 
    } else {
        if (num >= 20) {
            result += tens[num / 10]+" ";
            num %= 10;
        }
        if (num > 0) {
            result += ones[num]+" ";
        }
    }

    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    // Convert the number to words and print the result
    cout << convertToWords(number) << endl;

    return 0;
}
