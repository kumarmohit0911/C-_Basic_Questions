// How to convert string to int without using library functions in cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="12345";
    int num=0;
    for(int i=0;i<=a.length()-1;i++){
        num=num*10+a[i]-'0';
    }
    cout<<num;
}
