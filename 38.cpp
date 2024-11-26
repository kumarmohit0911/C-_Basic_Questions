// Write a c program to convert decimal number to  hexadecimal number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=255;
    vector<char> hexadecimal={};
    for (int i=1;num>0;i++){
        int hex=num%16;
        if(hex<=9){
            string z=to_string(hex);
            hexadecimal.push_back(hex);
            num/=16;
        }else{
            if(hex==10){
                hexadecimal.push_back('A');

            }
            if(hex==11){
                hexadecimal.push_back('B');

            }
            if(hex==12){
                hexadecimal.push_back('C');

            }
            if(hex==13){
                hexadecimal.push_back('D');

            }
            if(hex==14){
                hexadecimal.push_back('E');

            }
            if(hex==15){
                hexadecimal.push_back('F');

            }num/=16;
        }
    }
    for(int j=hexadecimal.size()-1; j>=0;j--){
        cout<<hexadecimal[j];
    }
}