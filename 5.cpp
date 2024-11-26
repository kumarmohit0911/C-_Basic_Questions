//C program to check a number is odd or even.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=14;
    if(num>0){
        if (num%2==0){
            cout<<"it is an even number";

        }else{
            cout<<"it is odd number";
        }
    }else{
        cout<<"it is negative number";
    } 
}