// Write a c program to convert decimal number to binary number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=1; 
    array<int,100> bin={0};
    for (int i =1;num>0;i++){
        bin[i]=num%2;
        num/=2;

    }
    for (int j=bin.size()-1;j>0;j--){
        cout<<bin[j];
    }
}