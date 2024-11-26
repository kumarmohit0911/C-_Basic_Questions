// How to compare two strings in c without using strcmp
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1="TIRE";
    string str2="TIRES";
    int str1_len=str1.size();
    int str2_len=str2.size();
    int n=min(str1_len,str2_len);
    bool isequal=true;
    for(int i=0;i<=n-1;i++){
        if(str1[i]>str2[i]){
            cout<<str1<<" is lexographically greater";
            isequal=false;
            break;
        }
        if(str1[i]<str2[i]){
            cout<<str2<<" is lexographically greater";
            isequal=false;
            break;
        }
    }
    if(isequal){
        if(str1_len==str2_len){
            cout<<"both are lexographically equal";
        }
        if(str1_len>str2_len){
            cout<<str1<<" IS lexogapically higher";
        }
        if(str1_len<str2_len){
            cout<<str2<<" IS lexogapically higher";
        }
    }
}