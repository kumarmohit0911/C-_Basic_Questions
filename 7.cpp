//Write a c program to check given string is palindrome number or not.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string word="appa";
    string rev_word="";
    for(int i = 0; i<word.length();i++){
        rev_word=rev_word+word[word.length()-i-1];
    }
    if(rev_word==word){
        cout<<"the string "<< rev_word<< " is pallindrome";


    }else{
        cout<<"the word "<< rev_word<< " is not pallindrome";
    }


}