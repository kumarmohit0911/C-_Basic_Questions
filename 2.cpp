#include<bits/stdc++.h>
using namespace std;
int main(){
    int ori_num;
    cout<<"enter the number";
    cin>>ori_num;
    int sum=0;
    int new_num = ori_num;
    int req;
    int n= to_string(ori_num).length();
    while (new_num!=0){
        req=new_num%10;
        new_num=new_num/10;     
        
        sum+=pow(req,n);
    }
    if(sum==ori_num){
        cout<<"Its an armstrong number"<<endl;
    }
    else{
        cout<<"Its not armstrong number";
    }

}