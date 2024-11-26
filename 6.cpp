//Write a c program to check given number is palindrome number or not.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=12211;
    int new_num=num;
    int rev_num=0;
    while(new_num!=0){
        int req=new_num%10;
        new_num=new_num/10;
        rev_num=rev_num*10+req;        
    }
    if(num==rev_num){
        cout<<"it is a pallindrome";
        
    }else{
        cout<<"it is not pallindrome";
    }

}