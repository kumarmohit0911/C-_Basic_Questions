// Write a c program to check given string is palindrome number or not. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="121";
    string rev_num="";
    for(int i=0; i<str.length();i++){
        rev_num=rev_num+str[str.length()-i-1];

    }
    if(rev_num==str){
        cout<<"this is a pallindrome number"<<endl;
    }else{
        cout<<"this is not a pallindrome string"<<endl;
    }
}