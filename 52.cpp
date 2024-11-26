// Write a cpp program to delete the all consonants from given string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="mohit12hi56mohit";
    string res="";
    for(int i=0;i<=str.length();i++){
        if(str[i]=='a' |str[i]=='e'| str[i]=='i'|str[i]=='o'|str[i]=='u' ) {
            res+=str[i];
        }else continue;
    }cout<<res;
}