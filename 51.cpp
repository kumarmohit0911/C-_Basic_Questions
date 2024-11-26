// Write a c program to convert the string from lower case to upper case.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string lower="mohit";
    for (int i = 0; i<=lower.length()-1;i++){
        lower[i]=toupper(lower[i]);
    }cout<<lower;
}