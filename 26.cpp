// Cpp program for swapping of two numbers 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; int b;
    cout<<"enter first number (a)= ";
    cin>>a;
    cout<<"enter second number (b)= ";
    cin>>b;
    
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Now after swapping a="<<a<<" and b="<<b;

}