#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    
    for(int i=2;i<=10;i++){
        int new_num=a+b;
        cout<<new_num<<endl;
        a=b;
        b=new_num;
    }
}