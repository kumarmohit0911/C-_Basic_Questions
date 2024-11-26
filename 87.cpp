#include <iostream>
using namespace std;

// Function to add two complex numbers
void addComplex(double a1, double b1, double a2, double b2, double& real, double& imag) {
    real = a1 + a2;
    imag = b1 + b2;
}

// Function to subtract two complex numbers
void subtractComplex(double a1, double b1, double a2, double b2, double& real, double& imag) {
    real = a1 - a2;
    imag = b1 - b2;
}

// Function to multiply two complex numbers
void multiplyComplex(double a1, double b1, double a2, double b2, double& real, double& imag) {
    real = a1 * a2 - b1 * b2;
    imag = a1 * b2 + b1 * a2;
}

// Function to divide two complex numbers
bool divideComplex(double a1, double b1, double a2, double b2, double& real, double& imag) {
    double denominator = a2 * a2 + b2 * b2;
    if (denominator == 0) {
        return false;  // Division by zero
    }
    real = (a1 * a2 + b1 * b2) / denominator;
    imag = (b1 * a2 - a1 * b2) / denominator;
    return true;
}

int main() {
    double a1, b1, a2, b2;  // Real and imaginary parts of two complex numbers
    double real, imag;

    // Input two complex numbers
    cout << "Enter real and imaginary parts of first complex number (a1 b1): ";
    cin >> a1 >> b1;
    cout << "Enter real and imaginary parts of second complex number (a2 b2): ";
    cin >> a2 >> b2;

    // Addition
    addComplex(a1, b1, a2, b2, real, imag);
    cout << "\nAddition: " << real << " + " << imag << "i" << endl;

    // Subtraction
    subtractComplex(a1, b1, a2, b2, real, imag);
    cout << "Subtraction: " << real << " + " << imag << "i" << endl;

    // Multiplication
    multiplyComplex(a1, b1, a2, b2, real, imag);
    cout << "Multiplication: " << real << " + " << imag << "i" << endl;

    // Division
    if (divideComplex(a1, b1, a2, b2, real, imag)) {
        cout << "Division: " << real << " + " << imag << "i" << endl;
    } else {
        cout << "Division: Error (division by zero)" << endl;
    }

    return 0;
}