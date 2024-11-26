// Write a c program to find out generic root of any number.
// GENERIC ROOT:- num=12345: sum=1+2+3+4+5=17=>1+7=8=GENERIC ROOT
#include<bits/stdc++.h>
using namespace std;
int generic_root(int mod_num){
    int sum=0;
    int rem;
    while(mod_num!=0){
        rem=mod_num%10;
        sum=sum+rem;
        mod_num=mod_num/10;
    }
    return sum;

}

int main(){
    int num=123456789;
    int req=generic_root(num);
    if(req>=10){

        req=generic_root(req);

    }
    cout<<"the generic root is "<<req;
    

    
}
