// Write a c program to convert octal number to decimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int oct_num=157;
    for(int i=0;oct_num>0;i++){
        int oct_dig=oct_num%10;
        sum=sum+oct_dig*pow(8,i);
        oct_num/=10;
    }
    cout<<sum;

}