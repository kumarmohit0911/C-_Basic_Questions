#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    int sum =0;
    for(int i = 1; i<a;i++){
        if (a%i==0){
            sum=sum+i;                

        }
    } 
    if (sum==a){
        cout<<a<<"the number is perfect number"<<endl;
    }
    else{
        cout<<"the number is not perfect"<<endl;
    }

    return 0;
}