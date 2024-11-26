// program to rverse a number
#include<bits/stdc++.h>
using namespace std;
int reverse_num(int n){
    int updated_num=n;
    int rev=0;
    while(updated_num!=0){
        int rem=updated_num%10;
        rev=rev*10+rem;
        updated_num=updated_num/10;
    }
    return rev;
}
int main(){
    int x;
    cin>>x;
    cout<<"the reversed number is : "<<reverse_num(x)<<endl;
}