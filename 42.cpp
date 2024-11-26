// Write a c program to convert binary number to decimal number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int bin=1111;
    int num=0;
    int cnt=0;
    int new_bin=bin;
    while(new_bin>0){
        int rem=bin%10;
        num=num+rem*pow(2,cnt);
        cnt++;       
        new_bin/=10;       
    }
    cout<<num;
}