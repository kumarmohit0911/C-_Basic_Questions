// Write a c program to find out L.C.M. of two numbers
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main(){
    // LCM=a*b/GCD(a,b)
    cout<<"LCM = " <<(12*18)/gcd(12,18);
    
}