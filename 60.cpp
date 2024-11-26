// Write a c program to reverse a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="MOHIT";
    string rev_str="";
    for (int i=0;i<=str.size();i++){
        rev_str+=str[str.size()-i-1];
    }cout<<rev_str;
}