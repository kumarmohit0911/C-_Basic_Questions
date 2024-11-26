// check if a number is prime or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter the number u want to check";
    cin>>a;
    int cnt=0;
    for(int i=1; i<=a ; i++){
        if( a%i==0){
            cnt+=1;
        }
    }
    if(cnt==2){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}