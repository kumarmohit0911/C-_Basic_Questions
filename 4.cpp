//Write a c program to check given number is strong number or not
// strong number :- Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number
// 145 = 1! + 4! + 5!
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial= factorial*i;
    }
    return factorial;
    }
int main(){
    cout<<"enter the number u wnt to check if it is strong number or not";
    int ori_num;
    cin>>ori_num;
    int new_num=ori_num;
    int req;
    int sum=0; 
    while (new_num!=0){
        req=new_num%10;
        new_num=new_num/10;
        sum=sum+ fact(req);
        
    }
    if (sum==ori_num){
        cout<<"it is a strong number";
    }else{
        cout<<"its not a strong number";
    }
}
