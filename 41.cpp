// Write a c program to convert octal number to hexadecimal number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=0;
    int oct_num=157;
    for(int i=0;oct_num>0;i++){
        int oct_dig=oct_num%10;
        num=num+oct_dig*pow(8,i);
        oct_num/=10;
    }
    vector<char> hexadecimal={};
    while(num>0){
        int hex=num%16;
        if(hex<10){
            hexadecimal.push_back('0'+hex);
        }
        else{
            hexadecimal.push_back('A'+(hex-10));
        }
        num/=16;

    }
    for(int j=hexadecimal.size()-1; j>=0;j--){
        cout<<hexadecimal[j];
    }
}
