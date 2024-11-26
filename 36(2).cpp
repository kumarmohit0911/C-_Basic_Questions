// Write a c program to convert decimal number to binary number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=15;
    vector<int> octalnumber;
    for(int i=1;num>0;i++){
        octalnumber.push_back(num%2);
        num/=2;

    }
    for(int j=octalnumber.size()-1;j>=0;j--){
        cout<<octalnumber[j];
    }
}