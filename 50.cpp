// Write a cpp program to convert the string from upper case to lower case
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<< "enter the string : ";
    cin>>str;
    string res="";
    for(int i=0; i<=str.length()-1;i++){
        str[i]=tolower(str[i]);
        
    }
    cout<<str;
}