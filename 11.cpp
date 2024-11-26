#include<bits/stdc++.h>
using namespace std;
int fact=1;
int factorial(int n){
    if(n==0){
        return fact;
    }
    fact= n *factorial(n-1);
    return fact;

}
int main(){
    int x;
    cout<<"input the number you want to take out the factorial ";
    cin>>x;
    cout<<"the factorial of the number is : "<<factorial(x)<<endl;
}