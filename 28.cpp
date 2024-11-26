// 15. Split number into digits in cpp programming
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=123;
    int modified=a;
    int dig;
    while(modified!=0){
        dig=modified%10;
        cout<<dig<<" ";
        modified=modified/10;
        
    }
}