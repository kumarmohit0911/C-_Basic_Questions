// Cpp program for unit conversion
#include<bits/stdc++.h>
using namespace std;

void convertLength() {
    double km, miles;
    cout << "Enter length in kilometers: ";
    cin >> km;
    miles = km * 0.621371; // Conversion factor: 1 km = 0.621371 miles
    cout << km << " kilometers = " << miles << " miles" << endl;
}

void convertTemperature() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32; // Conversion formula: (C * 9/5) + 32 = F
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
}

void convertWeight() {
    double kg, grams;
    cout << "Enter weight in kilograms: ";
    cin >> kg;
    grams = kg * 1000; // Conversion factor: 1 kg = 2.20462 pounds
    cout << kg << " kilograms = " << grams << " grams" << endl;
}
int main(){
    cout<<"Press 1 to convert KM to Miles\n Press 2 to convert Celcius to Farnhite\n Press 3 to convert KG to Grams  ";
    int entered_dig;
    cin>> entered_dig;
    if (entered_dig==1) convertLength();
    if (entered_dig==2) convertTemperature();
    if (entered_dig==3) convertWeight();


}