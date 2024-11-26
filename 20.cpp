// Write a c program to find largest among three numbers using conditional operator
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=664;int b=61; int c=63;
    if(a>b){
        if(b>c){
            cout<< a<<" is the largest number";
        }
        if(c>b){
            if (c>a){
                cout<<c<< " is the largest number";
            }
            else{
                cout<<a <<" is the largest number";
            }
        }
    }if(b>a){
        if (a>c){
            cout<<b<<" is the largest number";
        }
        if (c>a){
            if(c>b){
                cout<<c<< " is the largest number";
            }
            else{
                cout<<b<< " is the largest number";
            }
        }
    }
}