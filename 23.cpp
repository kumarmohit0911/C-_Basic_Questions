// program to find nCr factor
// nCr= n!/r!×(n−r)!
#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    if(num<=1){
        return 1;
    }
    int fact=num*factorial(num-1);
    return fact;

}
int main(){
    int n,r;
    cout<<"enter n and then c";
    cin>>n>>r;
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<nCr;
}

